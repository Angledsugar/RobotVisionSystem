from setuptools import setup
from glob import glob

package_name = 'robotvisionsystem'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ("share/ament_index/resource_index/packages",
         ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
        ("share/" + package_name, glob("launch/*.launch.py")),
        ("share/" + package_name + "/configs", glob("configs/*.*")),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ccy',
    maintainer_email='angledsugar@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'rvs = robotvisionsystem.rvs:main'
        ],
    },
)
