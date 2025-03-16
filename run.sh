#!/bin/bash

# Compile main.cpp to an executable named prog
g++ main.cpp -o prog

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful. Running ./prog..."
    ./prog
else
    echo "Compilation failed."
fi