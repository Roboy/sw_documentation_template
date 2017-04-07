# Welcome to the Roboy sw_documentation_template
[![Documentation Status](http://readthedocs.org/projects/roboy-sw-documentation-template/badge/?version=latest)](http://roboy-sw-documentation-template.readthedocs.io/en/latest/?badge=latest)

Template for documenting software requirements and software architectures

## Getting started

### Install

- Git clone this repo into your project folder
- Remove the .git folder: `rm -rf .git`
- Install the dependencies: `pip install -r .../sw_documentation_template/documentation/requirements.txt`
- Adapt the Doxyfile in ./documentation/Doxyfile to:
  - Name the project correctly: i.e. `PROJECT_NAME= "Software Documentation Template"`
  - Point to the correct all of your source and include folders: i.e. `INPUT= ../src ../include`
- Adapt the conf.py in ./documentation/conf.py to:
  - Name the project and author correctly: starting here: `project = u'Architecture Documentation Wiki'`
  - Look through other settings such as:
    - `htmlhelp_basename`

### Build


Its a sphinx project containing a doxygen setup, just run
    cd documentation
    doxygen
    cd ..
    make clean html
to generate the output.

Open the index.html file in the ./documentation/build folder

### Deploy


Log into the Roboy READTHEDOCS at http://readthedocs.io/ and add your repo there.


## Acknowledgement

The template is based on http://arc42.de/template/index.html

## License

Its licensed as 'very much resembles the Creative Commons Attribution License': http://arc42.de/template/licence.html
