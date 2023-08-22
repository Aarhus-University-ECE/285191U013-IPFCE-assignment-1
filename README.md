# IPFCE-Week-1-introduction

See `./assignment.pdf` for the assignment.

## Build

```bash
cmake -S . -B build
cmake --build build --target all
```

## Run tests
    
```bash
ctest --test-dir build
```
## Exercises

1. Write a program that computes the maximum of two integer numbers.

See `src/max.c` for where to write your solution.
The function is proper if the test cases in `test/max.cpp` pass.

2. Write a program that adds two numbers; write a program that adds three numbers;
   write a program that adds four numbers.
   
See `src/add.c` for where to write your solution.
The function is proper if the test cases in `test/add.cpp` pass.

3. Challenge: Write a program that computes the maximum number that can be
   produced by adding at most three arbitrary (possibly negative) integer numbers.
   
See `src/max_sum.c` for where to write your solution.
The function is proper if the test cases in `test/max_sum.cpp` pass.
