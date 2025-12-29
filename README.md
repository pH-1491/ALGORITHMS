# ALGORITHMS

A curated collection of important algorithms and data structures implemented in multiple programming languages. This repository is intended as a study reference, interview preparation resource, and coding practice playground.

## Table of Contents

- Overview
- Repository structure
- Languages used
- How to run
- Contributing
- Coding style & naming conventions
- Algorithms & Data Structures (high-level list)
- Complexity reference


## Overview

This repository contains implementations of common algorithms and data structures grouped by category (sorting, searching, graphs, dynamic programming, trees, heaps, strings, geometry, etc.). Each algorithm should live in its own directory or file with a clear name and include:

- Problem description or link to reference (if applicable)
- Implementation source file(s)
- README or comment with time/space complexity
- Example input/output and, where appropriate, a small test or driver program

## Repository structure

 Top-level layout:

- /arrays
- /strings
- /linked_lists
- /stacks_queues
- /trees
- /graphs
- /sorting
- /searching
- /dynamic_programming
- /greedy
- /math
- /geometry
- /bit_manipulation
- /templates (common utilities, DS implementations used across solutions)
- /tests (optional: unit tests or sample inputs)

Each folder should contain implementations grouped by topic and a README.md with a short index.

## Languages used

Primarily C++, Python, and Java. Use subfolders or file extensions to indicate language, e.g., `two_sum/two_sum.cpp` or `two_sum/two_sum.py`.

## How to run

General instructions (adjust per language):

- C++ (g++):
  - Compile: `g++ -std=c++17 -O2 -Wall filename.cpp -o filename`
  - Run: `./filename`

- Python (3.x):
  - Run: `python3 filename.py`



Include sample input files in `tests/` and show how to redirect input: `./program < tests/sample1.txt`.

## Contributing

Contributions are welcome. Please follow these guidelines:

1. Fork the repository.
2. Create a feature branch: `git checkout -b topic/brief-description`.
3. Add your implementation in the appropriate folder with a descriptive filename.
4. Include a short README or comment describing the approach and complexity.
5. Add tests or example inputs where useful.
6. Open a pull request describing your changes.

Follow the repository's coding style and add clear commit messages.

## Coding style & naming conventions

- Use descriptive file and function names.
- Include time and space complexity as comments near the top of each file.
- Prefer clear, readable code over golfing.
- Document any non-obvious steps or optimizations.

## Algorithms & Data Structures (high-level list)

Examples of topics to include:

- Sorting: quicksort, mergesort, heapsort, counting/radix
- Searching: binary search variants, interpolation search
- Data Structures: arrays, linked lists, stacks, queues, hash tables, heaps, balanced BSTs (AVL, Red-Black), segment trees, Fenwick trees
- Graphs: BFS, DFS, Dijkstra, Bellman-Ford, Floyd-Warshall, Kruskal, Prim, topological sort, SCCs
- Trees: binary tree traversals, LCA, trie, AVL/Red-Black
- Dynamic Programming: knapsack, LIS, LCS, dp on trees, matrix chain
- Greedy algorithms: interval scheduling, Huffman coding
- Strings: KMP, Z-algorithm, Rabin-Karp, suffix arrays/trees
- Math & Number Theory: gcd, modular arithmetic, fast exponentiation, sieve
- Geometry: convex hull, line intersection
- Bit manipulation: tricks and common patterns

## Complexity reference

Include a reference table or comments per implementation indicating time and space complexities, e.g., O(n log n) time, O(1) extra space.



## Contact

Maintainer: pH-1491

---
