#!/bin/bash
# A small Bash script to compile control-gpio.cpp

echo "Starting Compilation"
g++ record-temperature.cpp -o record-temperature -pthread
