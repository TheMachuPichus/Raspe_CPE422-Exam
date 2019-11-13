#!/bin/bash
# A small Bash script to compile control-gpio.cpp

config-pin -a p8.16 in+
config-pin -a p8.14 in+
echo "Starting Compilation"
g++ control-gpio.cpp derek_LED.cpp GPIO.cpp -o control-gpio -pthread
