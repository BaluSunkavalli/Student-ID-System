# Student ID Generation System 

A modular C-based student record management system implementing data structures and system-level features.

## Features

- Auto Student ID generation (SID001, SID002)
- Linked List based storage
- Hash Table for fast ID lookup
- Binary Search on sorted records
- Command Line Interface
- File persistence
- Unit testing
- Performance benchmarking

## Project Structure

include/ -> header files  
src/ -> source files  
tests/ -> unit tests  
data/ -> stored student records  

## Build

make

## Run

./student_system add Balu
./student_system list
./student_system search SID001
./student_system delete SID001
./student_system benchmark

## Run Tests

make test
./test

## Technologies

C  
Linked Lists  
Hash Tables  
Binary Search  
File Handling  
Command Line Interface