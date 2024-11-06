# robot-simulator

This repository contains a solution for the Two Fer exercise from Exercism in C.
For more details, visit the [exercise page](https://exercism.org/tracks/c/exercises/robot-simulator/).

## problem description

Write a robot simulator.

A robot factory's test facility needs a program to verify robot movements.

The robots have three possible movements:

turn right
turn left
advance
Robots are placed on a hypothetical infinite grid, facing a particular direction (north, east, south, or west) at a set of {x,y} coordinates, e.g., {3,8}, with coordinates increasing to the north and east.

The robot then receives a number of instructions, at which point the testing facility verifies the robot's new position, and in which direction it is pointing.

The letter-string "RAALAL" means:
Turn right
Advance twice
Turn left
Advance once
Turn left yet again
Say a robot starts at {7, 3} facing north. Then running this stream of instructions should leave it at {9, 4} facing west.

## build & run

1. Build the project using `make`:

```shell
make
```

1. Run the tests:

```shell
.\test_robot_simulator.exe
```
