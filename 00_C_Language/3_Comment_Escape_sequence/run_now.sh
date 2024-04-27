#!/bin/bash
set -e
#Create build directory
mkdir -p build
#Get the current working directory
PROJECT_SOURCE_DIR=$(pwd)
#Change directory to build directory
cd $PROJECT_SOURCE_DIR/build
#Run cmake
cmake ..
#Run make
make
#Run the executable
echo "----------------------------------"
echo "|Start program main excecutable   |"
echo "----------------------------------"
./main.exe
