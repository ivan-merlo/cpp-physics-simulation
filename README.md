# C++ Physics Simulations

Console-based physics experiments implementing numerical integration, terminal motion, and restitution dynamics in C++.

## Simulations Included

1. **Free Fall (`free_fall.cpp`):** Simulates gravitational acceleration and terminal landing from a specified height.
2. **Bouncing Ball (`bouncing_ball.cpp`):** Introduces a coefficient of restitution (elastic collision) and an energy decay threshold to simulate realistic bouncing until rest.

## Key Features

- **Euler Integration:** Discrete time steps (`deltaTime`) updating velocity and position vectors.
- **Collision & Restitution:** Inverts and scales velocity on impact to model kinetic energy loss.
- **Encapsulated Results:** Uses `SimulationResult` structs for clean data passing.

## How to Build and Run

### GCC / MinGW:
```bash
# Compile Free Fall simulation
g++ -std=c++17 free_fall.cpp -o free_fall.exe
./free_fall.exe

# Compile Bouncing simulation
g++ -std=c++17 bouncing_ball.cpp -o bouncing_ball.exe
./bouncing_ball.exe
