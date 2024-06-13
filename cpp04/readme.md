# CPP Module 04 - Polymorphism and Interfaces in C++

## Project Overview

CPP Module 04 explores advanced object-oriented programming concepts in C++, focusing on subtype polymorphism, abstract classes, and interfaces. This module emphasizes the design and implementation of interfaces and abstract classes to build a flexible and extensible software architecture.

## Description

Through a series of exercises, this module introduces practical implementations of polymorphism, abstract classes, and interface-like structures in C++, leveraging these concepts to create a system of interacting classes that simulate real-world behaviors and relationships.

## Key Features

- **Subtype Polymorphism**: Demonstrates how objects of different classes can be treated through the same interface, highlighting the concept of "one interface, multiple functions."
- **Abstract Classes**: Implements classes that cannot be instantiated on their own but can form the basis for other classes, enforcing a certain structure while providing shared functionality.
- **Interfaces**: Uses pure abstract classes to define roles that other classes can adopt, mimicking the behavior of interfaces in other programming languages like Java.

## Exercises

### Exercise 00: Polymorphism

Develops a base class `Animal` and derived classes `Dog` and `Cat`, focusing on how they can be manipulated polymorphically.

### Exercise 01: Brain Class

Expands on the animal classes by integrating a `Brain` class, which is composed within `Dog` and `Cat` classes to manage thoughts or memories.

### Exercise 02: Abstract Classes

Converts the `Animal` class into an abstract class to prevent instantiation and ensures all derived classes provide specific implementations for virtual functions.

### Exercise 03: Interfaces and Recap

Implements a more formal interface approach by defining operations that classes must support without specifying how these operations are to be carried out.

## Usage

Compile the code with:

```bash
make
```

## Conclusion

CPP Module 04 provides a deep dive into how polymorphism, abstract classes, and interfaces can be effectively used in C++ to create modular, maintainable, and scalable applications. The exercises are designed to solidify understanding of these advanced object-oriented programming concepts. 

## Contributors

- @iamgrg

## License

License](https://img.shields.io/badge/license-MIT-green)
Distributed under the MIT License.
