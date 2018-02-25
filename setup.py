try:
    from setuptools import setup
except ImportError:
    from distutils.core import setup

config = {
    'description': 'java2cpp',
    'author': 'Sergii Vystoropskyi',
    'author_email': 'vystos@uw.edu',
    'version': '0.1',
    'install_requires': ['nose', 'argparse', 'antlr4-python2-runtime'],
    'packages': ['java2cpp'],
    'scripts': [],
    'name': 'java2cpp'
}

setup(**config)

