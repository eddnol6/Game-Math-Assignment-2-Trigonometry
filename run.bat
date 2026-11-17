@echo off
cd /d "%~dp0"

if not exist bin mkdir bin

g++ main.cpp game_functions.cpp -o bin\trigonometry.exe -IC:\msys64\ucrt64\include -LC:\msys64\ucrt64\lib -lraylib -lopengl32 -lgdi32 -lwinmm

if errorlevel 1 (
    echo Compilation failed!
    pause
    exit /b 1
)

bin\trigonometry.exe