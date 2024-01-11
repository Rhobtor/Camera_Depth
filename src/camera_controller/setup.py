from setuptools import find_packages, setup

package_name = 'camera_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rhobtor',
    maintainer_email='rhobtor@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'distance=camera_controller.distance:main',
            'distance_move=camera_controller.distance_move:main',
            'distance_cells=camera_controller.distnce_move:main',
            'distance_all=camera_controller.distance_all:main',
        ],
    },
)
