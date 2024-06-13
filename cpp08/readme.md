# CPP Module 08 - Templated Containers, Iterators, Algorithms

## Project Overview

CPP Module 08 delves into the use of the C++ Standard Template Library (STL), focusing on templated containers, iterators, and algorithms. This module provides practical insights into the flexibility and power of the STL to perform complex operations efficiently.

## Description

The exercises in this module are designed to highlight the capability of C++ templates to handle data structures and algorithms. The tasks include implementing utility functions for container manipulation, exploring the management of dynamic data collections, and extending STL functionalities to meet specific needs.

## Key Features

- **Easy Find**: A template function to search for an element within any STL-compatible container.
- **Span Class**: Manages a collection of numbers and provides methods to determine the smallest and largest spans (gaps) between sorted numbers.
- **Mutant Stack**: Extends the standard `std::stack` to include iterator capabilities, allowing it to be used in a range similar to other STL containers.

## Exercises

### Exercise 00: Easy Find

Implements a function template that attempts to find a given integer within a container and demonstrates proper exception handling if the integer is not found.

### Exercise 01: Span

Develops a class that can store a fixed number of integers and calculate the shortest and longest spans between its elements. This class tests the boundaries of element management within custom data structures.

### Exercise 02: Mutated Abomination

Creates a `MutantStack` class that behaves like `std::stack` but also supports iteration using standard C++ iterators, thereby enhancing its usability.

## Usage

Compile the code with:

```bash
make
```

## Conclusion

CPP Module 08 effectively demonstrates the utility of C++ STL components, making extensive use of templated containers, iterators, and algorithms to solve varied programming challenges. These exercises not only reinforce understanding of STL but also encourage thoughtful solutions to common programming problems using modern C++ practices.

## Contributors

- @iamgrg

## License

![MIT License](https://img.shields.io/badge/license-MIT-green)
Distributed under the MIT License.
