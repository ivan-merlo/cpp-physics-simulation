# C++ Free-Fall Physics Simulation

A console-based physics simulation implementing numerical integration for free-fall motion and acceleration under gravity, written in C++.

## Features

- **Kinematics Simulation:** Calculates position, velocity, and delta time increments in discrete steps.
- **Data Structure Return:** Uses structured data (`SimulationResult`) to encapsulate calculated telemetry.
- **Formatted Console Output:** Formats simulation outputs using standard stream manipulation (`<iomanip>`).

## Technologies

- **Language:** C++
- **Platform:** Windows (utilizing `<windows.h>` console configurations and sleep intervals)

## How to Build and Run

### Using GCC / MinGW:
```bash
g++ -std=c++17 main.cpp -o physics_sim.exe
./physics_sim.exe
