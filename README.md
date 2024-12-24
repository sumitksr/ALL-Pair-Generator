# Power Set Generator

This is a C++ application that generates the power set (set of all subsets) of a given set of elements. It supports both iterative and recursive approaches to efficiently generate all possible subsets from the provided input.

## Features

- **Generates Power Set**: Computes the power set of a given input set.
- **Iterative and Recursive Approaches**: Provides both methods for generating subsets to demonstrate efficiency and flexibility.
- **Handles Variable Set Sizes**: The solution can generate power sets for sets of varying sizes with minimal performance impact.
- **Efficient Subset Generation**: Implements bit manipulation and recursion for fast and accurate results.

## Tools and Technologies

- **Programming Language**: C++
- **Approaches Used**: Iterative and Recursive subset generation
- **Techniques**: Bit Manipulation, Recursion

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/sumitksr/Power-set-genrator.git
   cd Power-set-genrator
2. Compile the program:
    ```bash
   g++ -o power_set_generator Main.cpp

3. Run the executable:
    ```bash
   ./power_set_generator
 ## Code Overview
  ### Main Features
- generatePowerSet (Iterative Approach): Uses bit manipulation to generate all subsets of the given set. It efficiently generates subsets by iterating through all possible binary representations of the set.

- generatePowerSetRecursive (Recursive Approach): Uses recursion to explore all possible subsets of the input set. It builds subsets by including or excluding elements in each recursive call.




