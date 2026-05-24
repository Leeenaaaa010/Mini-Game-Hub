
# Mini Game Hub

## Overview
Mini Game Hub is a C++ console-based application that allows users to play multiple games from a single menu. It demonstrates object-oriented programming, modular design, and basic software engineering practices using CMake and CTest.

---

## Features

### Snake Game
- Real-time console-based snake movement
- Controls: W A S D
- Eat food to grow and increase score
- Avoid walls and self-collision
- Game ends on collision

---

### Tic Tac Toe
- Two-player turn-based game (X and O)
- Input-based move system (row/column)
- Win detection (rows, columns, diagonals)
- Draw detection

---

### System Features
- Central game menu system
- GameManager handles game routing
- Object-oriented design (separate classes per game)
- No file I/O (all in-memory gameplay)

---

## Build Instructions

cmake -S . -B build
cmake --build build

## Run Program:
./build/game_hub

## Ai usage
AI tools were used for:

  Debugging compilation issues
  Understanding game logic implementation
  Assisting with test case design
  Resolving CMake configuration problems

  All generated code was reviewed and understood before use.

## Notes
  Built using C++17
  Uses CMake build system
  Fully console-based application
  All gameplay runs in memory (no file I/O)