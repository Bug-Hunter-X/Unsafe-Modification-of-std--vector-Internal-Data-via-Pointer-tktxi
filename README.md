# Unsafe Modification of std::vector Internal Data via Pointer
This repository demonstrates a common error in C++ involving the unsafe modification of std::vector's internal data using a raw pointer obtained from vec.data().  The example code shows how directly manipulating the vector's internal array using a pointer can lead to undefined behavior, particularly when the vector's size or capacity changes.

## The Problem
The `bug.cpp` file illustrates this dangerous practice.  It creates a vector, gets a pointer to its internal array via `vec.data()`, and modifies elements using pointer arithmetic.  While this approach might seem efficient, it violates the guarantees provided by the standard library's `std::vector`.  Changes to the vector's size or capacity (e.g., via `push_back` or `resize`) can invalidate the pointer, leading to segmentation faults or other unpredictable consequences.

## The Solution
The `bugSolution.cpp` file offers a safe and correct alternative. It demonstrates how to modify vector elements using iterators or array indexing, which ensures that the vector's internal mechanisms remain consistent and avoid undefined behavior.