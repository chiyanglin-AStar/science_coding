ref: https://anaconda.org/conda-forge/micromamba

        brew install micromamba

under conda 

        conda install conda-forge::micromamba

        micromamba install cmake eigen git python numpy pybind11

build from source : https://hoomd-blue.readthedocs.io/en/v4.9.1/building.html

        sudo apt -y install python3-pybind11

        git submodule update --init

        cmake -B build -S . -GNinja

        cd build

        ninja

        pip install numpy pytest rowan 

        python3 -m pytest hoomd

        