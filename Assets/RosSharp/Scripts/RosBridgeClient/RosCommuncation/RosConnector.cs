/*
© Siemens AG, 2017-2019
Author: Dr. Martin Bischoff (martin.bischoff@siemens.com)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

<http://www.apache.org/licenses/LICENSE-2.0>.

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

using System;
using System.Threading;
using RosSharp.RosBridgeClient.Protocols;
using UnityEngine;
using UnityEngine.UI;

using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;

namespace RosSharp.RosBridgeClient
{
    public class RosConnector : MonoBehaviour
    {
        public int SecondsTimeout = 10;
        public InputField inputurl; 
        public RosSocket RosSocket { get; private set; }
        public RosSocket.SerializerEnum Serializer;
        public Protocol protocol;
        public string RosBridgeServerUrl = "ws://localhost:9090";
        public string HostnameIP; 

        public ManualResetEvent IsConnected { get; private set; }

        public virtual void Awake()
        {
            // Debug.Log();
            RosBridgeServerUrl = PlayerPrefs.GetString("Hostip");
            IsConnected = new ManualResetEvent(false);
            new Thread(ConnectAndWait).Start();
        }

        // void Update(){
        //     if((GameObject.Find("Text").GetComponent<InputField>().text == null)){
        //         Debug.Log("Error");
        //         RosBridgeServerUrl = GameObject.Find("Text").GetComponent<InputField>().text;
        //     }
        // }

        protected void ConnectAndWait()
        {
            // uiBtn_CmdExecute();
            RosSocket = ConnectToRos(protocol, RosBridgeServerUrl, OnConnected, OnClosed, Serializer);

            if (!IsConnected.WaitOne(SecondsTimeout * 1000))
                Debug.LogWarning("Failed to connect to RosBridge at: " + RosBridgeServerUrl);
        }

        public static RosSocket ConnectToRos(Protocol protocolType, string serverUrl, EventHandler onConnected = null, EventHandler onClosed = null, RosSocket.SerializerEnum serializer = RosSocket.SerializerEnum.Microsoft)
        {
            IProtocol protocol = ProtocolInitializer.GetProtocol(protocolType, serverUrl);
            protocol.OnConnected += onConnected;
            protocol.OnClosed += onClosed;

            return new RosSocket(protocol, serializer);
        }

        private void OnApplicationQuit()
        {
            RosSocket.Close();
        }

        private void OnConnected(object sender, EventArgs e)
        {
            IsConnected.Set();
            Debug.Log("Connected to RosBridge: " + RosBridgeServerUrl);
        }

        private void OnClosed(object sender, EventArgs e)
        {
            IsConnected.Reset();
            Debug.Log("Disconnected from RosBridge: " + RosBridgeServerUrl);
        }

        // public void uiBtn_CmdExecute(object sender, EventArgs e)
        // {
        //     System.Diagnostics.ProcessStartInfo pri = new System.Diagnostics.ProcessStartInfo();
        //     System.Diagnostics.Process pro = new System.Diagnostics.Process();

        //     //실행할 파일 명 입력하기
        //     pri.FileName = "cmd.exe";

        //     //cmd 창 띄우기
        //     pri.CreateNoWindow = false; //flase가 띄우기, true가 안 띄우기
        //     pri.UseShellExecute = false;
        //     pri.RedirectStandardInput = true;
        //     pri.RedirectStandardOutput = true;
        //     pri.RedirectStandardError = true;
        //     pro.StartInfo = pri;
        //     pro.Start();

        //     //명령어 실행
        //     pro.StandardInput.Write(@"wsl hostnem -I" + Environment.NewLine);
        //     pro.StandardInput.Close();
        //     HostnameIP = pro.StandardOutput.ReadToEnd();
        //     pro.WaitForExit();
        //     pro.Close();
        //     // MessageBox.Show(resultValue);
        // }
    }
}
