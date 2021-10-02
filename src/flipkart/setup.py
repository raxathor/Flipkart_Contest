from setuptools import setup

package_name = 'flipkart'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='manojbr',
    maintainer_email='manojbr105@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'detector = flipkart.detector:main',
            'viper = flipkart.viper:main',
            'bigbrain = flipkart.bigbrain:main']
    },
)
