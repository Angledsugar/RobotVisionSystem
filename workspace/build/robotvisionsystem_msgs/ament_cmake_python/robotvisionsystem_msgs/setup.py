from setuptools import find_packages
from setuptools import setup

setup(
    name='robotvisionsystem_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('robotvisionsystem_msgs', 'robotvisionsystem_msgs.*')),
)
