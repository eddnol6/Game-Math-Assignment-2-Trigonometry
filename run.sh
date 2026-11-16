#!/bin/bash
set -e

mkdir -p bin

g++ main.cpp game_functions.cpp -o bin/trigonometry \
    -Iext/raylib/include \
    -Lext/raylib/lib \
    -lraylib -lm -lX11 -ldl -lrt -pthread

./bin/trigonometry
