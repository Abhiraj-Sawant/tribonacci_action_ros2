from setuptools import find_packages
from setuptools import setup

setup(
    name='tribonacci_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('tribonacci_interfaces', 'tribonacci_interfaces.*')),
)
