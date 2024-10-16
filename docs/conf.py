import os
import subprocess

# Run Doxygen
subprocess.call('doxygen Doxyfile', shell=True)

# Project information
project = 'SampleProject'
author = 'Your Name'
release = '0.1'

# General configuration
extensions = ['breathe']

breathe_projects = {
    "SampleProject": "_doxygen/xml"
}
breathe_default_project = "SampleProject"

# HTML output
html_theme = 'sphinx_rtd_theme'
