# In-Memory Key-Value Database

## Overview
A C++ console-based in-memory key-value database similar to Redis.

## Features
- SET key-value pairs
- GET value by key
- DELETE key
- EXISTS check
- Display all entries

## Time Complexity
All operations run in O(1) average time using unordered_map.

## Tech Stack
- C++
- Hashing (unordered_map)
- OOP
- Command-based interface

## How to Run

Compile:
g++ main.cpp Database.cpp -o database

Run:
./database
