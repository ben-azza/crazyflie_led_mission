from setuptools import find_packages, setup

package_name = 'cf_led_mission'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    #data_files=[
    #    ('share/ament_index/resource_index/packages',
    #       ['resource/' + package_name]),
    #   ('share/' + package_name, ['package.xml']),
    #],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/mission_launch.py']),
        ('share/' + package_name + '/config', ['config/crazyflies.yaml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mouha',
    maintainer_email='mohamedyassine.benazza@insat.ucar.tn',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [ 'mission_node = cf_led_mission.mission_node:main',
        ],
    },
)
