# Search Algorithms

This repository contains C programs implementing various search algorithms along with analyses of their time and space complexities.

## Description

The following search algorithms are implemented:

1. Linear Search
2. Binary Search

For each algorithm, the time and space complexities are analyzed and provided in separate files.

## Files

### Source Files

1. `0-linear.c`: Implementation of the linear search algorithm.
2. `1-binary.c`: Implementation of the binary search algorithm.

### Test Files

1. `0-main.c`: Test cases for the linear search algorithm.
2. `1-main.c`: Test cases for the binary search algorithm.

### Complexity Analysis Files

1. `2-O`: Time complexity analysis of linear search.
2. `3-O`: Space complexity analysis of linear search.
3. `4-O`: Time complexity analysis of binary search.
4. `5-O`: Space complexity analysis of binary search.
5. `6-O`: Space complexity analysis of the `allocate_map` function.

## Usage

To test the search algorithms, compile the corresponding test file along with the source file:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
```

Replace `0-main.c` and `0-linear.c` with the appropriate test and source files for other algorithms.

## Author

This repository is maintained by [Muna Mohammed].
