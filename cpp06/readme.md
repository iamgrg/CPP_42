# CPP Module 06 - C++ Casting

## Project Overview

CPP Module 06 explores the concepts of C++ casts, including static, dynamic, const, and reinterpret casts. This module provides practical applications of casting techniques to solve common programming problems involving type conversions and object serialization.

## Description

This module is designed to enhance understanding of C++'s powerful casting operators, offering a detailed exploration of their usage in various scenarios. Through exercises, the module covers the conversion of scalar types, serialization of objects, and the identification of object types at runtime without using RTTI (Run-Time Type Information).

## Key Features

- **Scalar Type Conversion**: Implements conversions between different scalar types, handling edge cases and special values effectively.
- **Serialization**: Demonstrates how to serialize and deserialize objects, providing a practical understanding of how pointers can be safely converted to and from integer types.
- **Type Identification**: Explores techniques to identify the real type of objects at runtime using advanced casting methods, without relying on RTTI.

## Exercises

### Exercise 00: Conversion of Scalar Types

Develops a class for converting scalar values between types, such as char, int, float, and double, handling various edge cases like non-displayable characters and floating-point limits.

### Exercise 01: Serialization

Introduces a mechanism to serialize and deserialize objects, focusing on converting pointers to uintptr_t and vice versa, which is essential for low-level memory management and data transmission.

### Exercise 02: Identify Real Type

Challenges the understanding of polymorphic types and dynamic casting by requiring the identification of derived types using base class pointers, without using type information functions.

## Usage

Compile the code with:

```bash
make
```

## Conclusion

CPP Module 06 provides a deep dive into the mechanics and utilities of C++ casting operators, enhancing the ability to write more efficient and robust C++ code. The exercises are crafted to solidify theoretical knowledge through practical implementation challenges.

## Contributors

- @iamgrg

## License

License](https://img.shields.io/badge/license-MIT-green)
Distributed under the MIT License.
