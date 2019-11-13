#!/bin/bash
# A small Bash script to compile control-gpio.cpp

echo "Starting Compilation"
g++ process-temp.cpp -o process-temp -pthread
