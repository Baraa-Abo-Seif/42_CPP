# 🧩 42 C++ Modules

> A complete journey from C to C++ — from the first `std::cout` to STL containers, algorithms, and the Ford-Johnson sorting algorithm.

![42 School](https://img.shields.io/badge/42-School-black?style=for-the-badge)
![C++98](https://img.shields.io/badge/C%2B%2B-98-blue?style=for-the-badge)
![Modules](https://img.shields.io/badge/Modules-00--09-purple?style=for-the-badge)
![OOP](https://img.shields.io/badge/OOP-C%2B%2B-orange?style=for-the-badge)
![STL](https://img.shields.io/badge/STL-Containers%20%26%20Algorithms-green?style=for-the-badge)

---

## 📚 Table of Contents

- [About](#-about)
- [The C++ Journey](#-the-c-journey)
- [Why C++98?](#-why-c98)
- [Learning Roadmap](#-learning-roadmap)
- [CPP Module 00 — Basics](#-cpp-module-00--basics)
- [CPP Module 01 — Memory, References & Pointers](#-cpp-module-01--memory-references--pointers)
- [CPP Module 02 — Ad-hoc Polymorphism & Operator Overloading](#-cpp-module-02--ad-hoc-polymorphism--operator-overloading)
- [CPP Module 03 — Inheritance](#-cpp-module-03--inheritance)
- [CPP Module 04 — Subtype Polymorphism](#-cpp-module-04--subtype-polymorphism)
- [CPP Module 05 — Exceptions](#-cpp-module-05--exceptions)
- [CPP Module 06 — C++ Casts & RTTI](#-cpp-module-06--c-casts--rtti)
- [CPP Module 07 — Templates](#-cpp-module-07--templates)
- [CPP Module 08 — Containers, Iterators & Algorithms](#-cpp-module-08--containers-iterators--algorithms)
- [CPP Module 09 — STL & Algorithms](#-cpp-module-09--stl--algorithms)
- [Concept Map](#-concept-map)
- [C vs C++](#-c-vs-c)
- [What I Learned](#-what-i-learned)
- [Common C++ Concepts](#-common-c-concepts)
- [Compilation](#-compilation)
- [Project Structure](#-project-structure)
- [Learning Progress](#-learning-progress)
- [Final Skills](#-final-skills)
- [Completion Checklist](#-completion-checklist)
- [Resources](#-resources)
- [Final Thoughts](#-final-thoughts)

---

# 🧠 About

The **42 C++ Modules** are a progressive introduction to C++ programming and Object-Oriented Programming.

The journey starts from the very basics of C++ and gradually introduces:

- C++ syntax
- Namespaces
- Classes and objects
- Constructors and destructors
- References and pointers
- Dynamic memory allocation
- Operator overloading
- Orthodox Canonical Form
- Inheritance
- Polymorphism
- Abstract classes
- Interfaces
- Exceptions
- Type casting
- RTTI
- Templates
- Generic programming
- STL containers
- Iterators
- Algorithms
- Algorithmic complexity

The modules are designed to build knowledge progressively.

Instead of learning isolated C++ features, each module introduces concepts that become necessary for the next stage.

---

# 🚀 The C++ Journey

The overall journey can be viewed as:

```text
C
│
├── CPP00
│   └── Basic C++ / Classes / Streams
│
├── CPP01
│   └── Memory / References / Pointers
│
├── CPP02
│   └── Operator Overloading / Fixed Point
│
├── CPP03
│   └── Inheritance
│
├── CPP04
│   └── Polymorphism / Abstract Classes / Interfaces
│
├── CPP05
│   └── Exceptions
│
├── CPP06
│   └── Casts / RTTI
│
├── CPP07
│   └── Templates
│
├── CPP08
│   └── Containers / Iterators / Algorithms
│
└── CPP09
    └── STL / Real Algorithms / Complexity
```

The learning progression can be summarized as:

```text
Syntax
  ↓
Classes
  ↓
Objects
  ↓
Memory
  ↓
Operator Overloading
  ↓
Inheritance
  ↓
Polymorphism
  ↓
Abstraction
  ↓
Exceptions
  ↓
Type Casting
  ↓
Templates
  ↓
STL
  ↓
Algorithms
  ↓
Complexity & Performance
```

---

# 🧱 Why C++98?

The C++ Modules are traditionally built around the **C++98 standard**.

This means that modern features such as:

```cpp
auto
nullptr
range-based for
smart pointers
lambdas
```

are not available.

This restriction may initially feel inconvenient, but it forces a deeper understanding of the language.

Instead of relying on modern abstractions, you have to understand:

- Raw pointers
- Manual memory management
- Explicit types
- Iterators
- Object lifetime
- Copy semantics

The goal is not to write modern C++ immediately.

The goal is to understand **what is happening underneath the abstractions**.

---

# 🗺️ Learning Roadmap

| Module | Main Topic | Main Concepts |
|---|---|---|
| CPP00 | Basics | Classes, namespaces, streams |
| CPP01 | Memory | Allocation, references, pointers |
| CPP02 | Operators | Operator overloading, fixed-point |
| CPP03 | Inheritance | Base/derived classes |
| CPP04 | Polymorphism | Virtual functions, abstract classes |
| CPP05 | Exceptions | `try`, `catch`, `throw` |
| CPP06 | Casts | `static_cast`, `dynamic_cast`, etc. |
| CPP07 | Templates | Generic programming |
| CPP08 | Containers | STL, iterators, algorithms |
| CPP09 | Advanced STL | Containers, parsing, algorithms, complexity |

---

# 🟣 CPP Module 00 — Basics

## 🎯 Main Goal

The first contact with C++.

This module introduces the fundamental differences between C and C++ and begins the transition toward Object-Oriented Programming.

### Main Concepts

- Namespaces
- Classes
- Objects
- Member functions
- Member variables
- `std::cout`
- `std::cin`
- `std::string`
- Constructors
- Destructors
- Initialization lists
- `static`
- `const`
- Scope resolution operator `::`

---

## 🧪 Exercise 00 — Megaphone

### Goal

Create a program that converts command-line arguments to uppercase.

Example:

```bash
./megaphone "hello world"
```

Output:

```text
HELLO WORLD
```

### What This Teaches

- `argc`
- `argv`
- Command-line arguments
- `std::cout`
- `std::string`
- Character manipulation
- Basic C++ syntax

### Main Lesson

Get comfortable writing a simple C++ program without immediately introducing complex OOP.

---

## 🧪 Exercise 01 — My Awesome PhoneBook

### Goal

Build a small interactive phonebook.

The program stores contacts and allows the user to:

```text
ADD
SEARCH
EXIT
```

### Concepts

- Classes
- Objects
- Encapsulation
- Member functions
- Private attributes
- Input/output
- String manipulation
- Fixed-size storage

### Important Idea

Instead of organizing everything around functions and structs as in C, we begin organizing code around **objects**.

```text
PhoneBook
   │
   ├── Contact
   ├── Contact
   ├── Contact
   └── ...
```

---

## 🧪 Exercise 02 — The Job Of Your Dreams

### Goal

Reconstruct a class implementation based on existing logs and test files.

### What This Teaches

- Constructors
- Destructors
- Static members
- Object lifetime
- Initialization
- Understanding existing code
- Matching expected program behavior

### Important Lesson

Programming is not always about creating code from zero.

A major skill is:

> Read → Understand → Reconstruct → Test

---

## 🧠 CPP00 Takeaways

```text
C
 ↓
C++ syntax
 ↓
Classes
 ↓
Objects
 ↓
Encapsulation
```

---

# 🔵 CPP Module 01 — Memory, References & Pointers

## 🎯 Main Goal

Move deeper into C++ memory management and understand the relationship between:

```text
Pointers
References
Objects
Memory
```

### Main Concepts

- Dynamic allocation
- `new`
- `delete`
- Pointers
- References
- Pointer to member
- File streams
- Constructors
- Destructors
- Function pointers
- `switch`

---

## 🧪 Exercise 00 — BraiiiiiiinnnzzzZ

Introduces dynamic object allocation.

You work with objects created using:

```cpp
new
```

and destroyed using:

```cpp
delete
```

### Concepts

- Heap allocation
- Object lifetime
- Constructors
- Destructors
- Stack vs heap

---

## 🧪 Exercise 01 — Moar brainz!

The goal is to allocate multiple objects dynamically.

This introduces the idea of allocating arrays of objects.

### Concepts

- `new[]`
- `delete[]`
- Dynamic arrays
- Object lifetime
- Memory ownership

---

## 🧪 Exercise 02 — HI THIS IS BRAIN

This exercise focuses on:

```text
Pointer
Reference
Address
```

You learn that:

```cpp
std::string *stringPTR;
std::string &stringREF;
```

are two different mechanisms for accessing the same object.

---

## 🧪 Exercise 03 — Unnecessary violence

Introduces references through a simple class design.

### Main Lesson

A reference provides another name for an existing object without creating a new object.

---

## 🧪 Exercise 04 — Sed is for losers

Introduces file manipulation.

Concepts include:

- `std::ifstream`
- `std::ofstream`
- Reading files
- Writing files
- String replacement

---

## 🧪 Exercise 05 — Harl 2.0

Introduces:

- Member function pointers
- `switch`
- Function dispatch

This is an important step toward understanding how behavior can be selected dynamically.

---

## 🧪 Exercise 06 — Harl filter

Combines previous concepts.

You learn how to control program flow based on a selected level.

---

## 🧠 CPP01 Takeaways

```text
Object
  ↓
Memory
  ↓
Pointer
  ↓
Reference
  ↓
Dynamic Allocation
  ↓
Object Lifetime
```

---

# 🟢 CPP Module 02 — Ad-hoc Polymorphism & Operator Overloading

## 🎯 Main Goal

Understand how C++ allows operators to work naturally with user-defined types.

The module also introduces the **Orthodox Canonical Form**.

### Main Concepts

- Fixed-point numbers
- Operator overloading
- Copy constructor
- Copy assignment operator
- Destructor
- Constructor
- Orthodox Canonical Form

---

# 🔢 Fixed-Point Numbers

The module introduces a representation of decimal values using integers and fractional bits.

Instead of storing:

```text
42.42
```

directly as a floating-point value, a fixed-point representation stores the number using an integer representation with a predefined fractional precision.

This teaches:

- Binary representation
- Precision
- Numeric representation
- Conversion
- Arithmetic operators

---

## 🧪 Exercise 00 — My First Class in Orthodox Canonical Form

Introduces the basic `Fixed` class.

The class should provide:

- Default constructor
- Copy constructor
- Copy assignment operator
- Destructor

---

## 🧪 Exercise 01 — Towards a more useful Fixed class

Adds:

- Integer conversion
- Floating-point conversion
- Arithmetic operators
- Comparison operators

You begin making your class behave like a built-in numeric type.

---

## 🧪 Exercise 02 — Now we're talking

Introduces:

- Increment/decrement
- Min/max
- More operator overloading

The goal is to make the class feel natural to use.

---

## 🧪 Exercise 03 — BSP

Introduces the Binary Space Partitioning concept through a practical geometric problem.

### Concepts

- Fixed-point arithmetic
- Points
- Geometry
- Cross products
- Operator overloading
- Mathematical reasoning

---

## 🧠 Orthodox Canonical Form

A traditional C++ class is expected to correctly handle:

```cpp
Class();
Class(const Class &other);
Class &operator=(const Class &other);
~Class();
```

These correspond to:

```text
Default constructor
Copy constructor
Copy assignment operator
Destructor
```

Understanding this is essential before working with inheritance and polymorphism.

---

# 🟡 CPP Module 03 — Inheritance

## 🎯 Main Goal

Learn how classes can inherit behavior and data from other classes.

### Main Concepts

- Inheritance
- Base classes
- Derived classes
- `protected`
- Constructor chaining
- Destructor chaining
- Multiple inheritance levels

---

## 🧪 Exercise 00 — Aaaaand... OPEN!

Introduces a base class and a derived class.

You learn the basic relationship:

```text
Base
 │
 └── Derived
```

---

## 🧪 Exercise 01 — Serena, my love!

Introduces another level of inheritance and demonstrates how inherited members behave.

---

## 🧪 Exercise 02 — Repetitive work

Builds a hierarchy of classes.

Example:

```text
ClapTrap
   │
   ├── ScavTrap
   │
   └── FragTrap
```

The important lesson is understanding how inheritance allows us to reuse common behavior.

---

## 🧠 Main Lesson

Inheritance allows us to express:

> "This class is a specialized version of another class."

For example:

```text
Animal
  │
  ├── Dog
  └── Cat
```

---

# 🔴 CPP Module 04 — Subtype Polymorphism

## 🎯 Main Goal

This is where Object-Oriented Programming becomes much more powerful.

### Main Concepts

- Virtual functions
- Runtime polymorphism
- Pure virtual functions
- Abstract classes
- Interfaces
- Deep copies
- Virtual destructors
- Dynamic dispatch

---

## 🧪 Exercise 00 — Polymorphism

Introduces:

```cpp
virtual
```

and demonstrates the difference between:

```text
Static dispatch
Runtime dispatch
```

---

## 🧪 Exercise 01 — I don't want to set the world on fire

Introduces dynamic memory inside an object.

This exercise focuses heavily on:

```text
Deep copy
Shallow copy
Ownership
```

Example:

```text
Animal
  │
  ├── Dog
  │     └── Brain
  │
  └── Cat
        └── Brain
```

---

## 🧪 Exercise 02 — Abstract class

Introduces:

```cpp
virtual void makeSound() = 0;
```

A class containing a pure virtual function becomes abstract.

You cannot instantiate it directly.

---

## 🧪 Exercise 03 — Interfaces & AMateria

Introduces interface-style design.

Concepts include:

- Abstract classes
- Interfaces
- Dynamic allocation
- Polymorphism
- Ownership
- Deep copying

---

## 🧠 The Big Polymorphism Idea

Without polymorphism:

```cpp
Dog dog;
Cat cat;
```

With polymorphism:

```cpp
Animal *animal = new Dog();
animal->makeSound();
```

The same interface can produce different behavior.

```text
Animal
  │
  ├── Dog → "Woof!"
  │
  └── Cat → "Meow!"
```

---

# 🟠 CPP Module 05 — Exceptions

## 🎯 Main Goal

Learn how C++ handles exceptional situations without forcing every function to manually return an error code.

### Main Concepts

- Exceptions
- `throw`
- `try`
- `catch`
- Custom exceptions
- Exception hierarchy
- Abstract classes
- Error handling

---

## 🧪 Exercise 00 — Mommy, when I grow up, I want to be a bureaucrat!

Introduces the `Bureaucrat` class.

A bureaucrat has a grade with limits.

Invalid grades result in exceptions.

---

## 🧪 Exercise 01 — Form up, maggots!

Introduces forms that have:

- Required signing grade
- Required execution grade
- Signed/unsigned state

Exceptions are used when operations are invalid.

---

## 🧪 Exercise 02 — No, you need form 28B, not 28C...

Introduces multiple concrete forms.

The exercise combines:

```text
Inheritance
Abstract classes
Exceptions
Polymorphism
```

---

## 🧪 Exercise 03 — At least this beats coffee-making

Introduces an `Intern` capable of creating different forms.

This introduces a simple **Factory-like design**.

---

## 🧠 Exception Flow

The basic model is:

```text
try
 │
 ├── operation
 │
 └── throw
       │
       ↓
     catch
```

Instead of:

```cpp
if (error)
    return -1;
```

we can use:

```cpp
throw SomeException();
```

and handle it elsewhere.

---

# 🟣 CPP Module 06 — C++ Casts & RTTI

## 🎯 Main Goal

Understand C++ type conversion and runtime type information.

### Main Concepts

- `static_cast`
- `dynamic_cast`
- `reinterpret_cast`
- `const_cast`
- Serialization
- RTTI
- Type identification

---

## 🧪 Exercise 00 — Scalar conversion

Create a converter that accepts a string representation and converts it to:

```text
char
int
float
double
```

Example:

```text
42
```

becomes:

```text
char: '*'
int: 42
float: 42.0f
double: 42.0
```

---

## 🧪 Exercise 01 — Serialization

Introduces conversion between:

```text
Pointer
     ↓
integer representation
     ↓
Pointer
```

The exercise teaches the idea of serialization-like pointer conversion.

---

## 🧪 Exercise 02 — Identify real type

Introduces:

```cpp
dynamic_cast
```

and runtime identification of polymorphic objects.

Example:

```text
Base
 ├── A
 ├── B
 └── C
```

At runtime, the program determines which derived type is actually present.

---

## 🧠 Cast Overview

| Cast | Main Purpose |
|---|---|
| `static_cast` | Compile-time checked conversions |
| `dynamic_cast` | Runtime-safe polymorphic casting |
| `reinterpret_cast` | Low-level reinterpretation |
| `const_cast` | Add/remove const qualification |

Understanding when **not** to cast is just as important as understanding how to cast.

---

# 🔵 CPP Module 07 — Templates

## 🎯 Main Goal

Move from Object-Oriented Programming toward **Generic Programming**.

Instead of writing:

```cpp
int max(int a, int b);
float max(float a, float b);
double max(double a, double b);
```

we can write:

```cpp
template <typename T>
T max(T a, T b);
```

The compiler generates the appropriate version.

---

## 🧪 Exercise 00 — Start with a few functions

Introduces function templates.

Typical operations include:

```text
swap
min
max
```

---

## 🧪 Exercise 01 — Iter

Introduces templates operating on arrays.

Concept:

```text
Template
   ↓
Generic function
   ↓
Works with multiple types
```

---

## 🧪 Exercise 02 — Array

Introduces a generic dynamic array class.

Example:

```cpp
Array<int>
Array<std::string>
Array<double>
```

The same class design can work with different types.

---

## 🧠 Generic Programming

Templates allow us to write algorithms independently of a specific type.

```text
Algorithm
   │
   ├── int
   ├── float
   ├── double
   └── custom class
```

This concept becomes extremely important when reaching the STL.

---

# 🟢 CPP Module 08 — Containers, Iterators & Algorithms

## 🎯 Main Goal

Start using the Standard Template Library.

### Main Concepts

- STL containers
- Iterators
- Generic algorithms
- `std::vector`
- `std::list`
- `std::stack`
- Searching
- Ranges
- Exception handling

---

## 🧪 Exercise 00 — Easyfind

Create a generic function capable of searching for a value inside a container.

Concepts:

```text
Templates
+
Iterators
+
STL containers
```

---

## 🧪 Exercise 01 — Span

Create a class capable of storing numbers and calculating:

```text
Shortest span
Longest span
```

The exercise introduces:

- Containers
- Iterators
- Algorithms
- Exception handling
- Large datasets

---

## 🧪 Exercise 02 — Mutated abomination

Work with:

```cpp
std::stack
```

and extend its functionality using inheritance.

This teaches how STL containers can be adapted and reused.

---

## 🧠 What Is an Iterator?

An iterator provides a way to traverse a container without needing to know its internal implementation.

Conceptually:

```text
Container
┌───────────────────────┐
│ 10 │ 20 │ 30 │ 40 │
└───────────────────────┘
      ↑
    iterator
```

Instead of manually accessing internal memory, we use the iterator interface.

---

# 🟡 CPP Module 09 — STL & Algorithms

## 🎯 Main Goal

Apply everything learned so far to larger, algorithm-oriented problems.

This module focuses heavily on:

- STL containers
- Parsing
- Data processing
- Algorithms
- Complexity
- Performance
- Benchmarking

---

## 🧪 Exercise 00 — Bitcoin Exchange

### Goal

Create a program that reads historical Bitcoin exchange rates and calculates values based on user input.

Typical input:

```text
2011-01-03 | 3
```

The program looks up the appropriate exchange rate and calculates the result.

### Main Concepts

- `std::map`
- Key/value relationships
- File parsing
- Date handling
- String manipulation
- Searching
- `lower_bound`
- Exception handling
- Input validation

### Data Structure

```text
Date
  ↓
Exchange Rate

2011-01-03 → 0.95
2011-01-04 → 0.98
2011-01-05 → 1.01
```

The problem teaches how to choose a suitable data structure for ordered data.

---

## 🧪 Exercise 01 — Reverse Polish Notation

### Goal

Build a calculator using Reverse Polish Notation.

Instead of:

```text
3 + 4
```

we write:

```text
3 4 +
```

For:

```text
3 + 4 × 2
```

the notation can be:

```text
3 4 2 * +
```

---

## 🧠 Why `std::stack`?

A stack follows:

```text
LIFO
Last In
First Out
```

Example:

```text
push 3
push 4
push 2

    ↓

┌───┐
│ 2 │ ← top
├───┤
│ 4 │
├───┤
│ 3 │
└───┘
```

When an operator appears:

```text
*
```

we pop the required operands, calculate the result, and push it back.

---

## 🧪 Exercise 02 — PmergeMe

### Goal

Implement a sorting program using the **Merge-Insertion / Ford-Johnson algorithm**.

The program receives a sequence of positive integers:

```text
3 5 9 7 4 1 8
```

and sorts them.

It must also compare the performance of different STL containers.

---

# 🧠 Ford-Johnson Algorithm

The Ford-Johnson algorithm is a comparison-based sorting algorithm designed to minimize the number of comparisons.

At a high level:

```text
Input
  │
  ↓
Pair elements
  │
  ↓
Compare pairs
  │
  ↓
Build ordered groups
  │
  ↓
Recursive sorting
  │
  ↓
Insert remaining elements
  │
  ↓
Sorted sequence
```

This exercise is one of the most algorithmically demanding parts of the C++ Modules.

It requires understanding:

- Pairing
- Recursion
- Insertion
- Binary search
- Comparison counting
- Complexity
- Performance measurement
- Container behavior

---

# 📊 Container Comparison

A major lesson of CPP09 is that different containers can produce different performance characteristics.

For example:

```text
std::vector
    ↓
Contiguous memory
    ↓
Fast random access
```

while:

```text
std::deque
    ↓
Segmented storage
    ↓
Different insertion/access characteristics
```

The objective is not simply:

> "Make it work."

It is:

> "Make it work and understand why it performs the way it does."

---

# 🧠 Concept Map

The entire C++ journey can be visualized as:

```text
                    C++
                     │
          ┌──────────┴──────────┐
          │                     │
       Syntax                  OOP
          │                     │
          │              ┌──────┴──────┐
          │              │             │
       Classes       Inheritance   Encapsulation
          │              │             │
          └──────────────┼─────────────┘
                         │
                    Polymorphism
                         │
                 Abstract Classes
                         │
                    Exceptions
                         │
                       Casts
                         │
                     Templates
                         │
                       STL
                         │
          ┌──────────────┼──────────────┐
          │              │              │
      Containers      Iterators     Algorithms
          │              │              │
          └──────────────┼──────────────┘
                         │
                    Complexity
                         │
                    Performance
```

---

# 🔄 C vs C++

One of the most important goals of the modules is understanding the transition from C to C++.

| C | C++ |
|---|---|
| `printf` | `std::cout` |
| `scanf` | `std::cin` |
| `malloc` | `new` |
| `free` | `delete` |
| `struct` | `class` |
| Function-based design | Object-oriented design |
| Manual data structures | STL containers |
| Function pointers | Member function pointers / functors |
| Macros | Constants / templates / language features |
| Manual error codes | Exceptions |
| Raw arrays | STL containers |
| Generic macros | Templates |

---

# 🧩 Common C++ Concepts

## Classes

A class combines:

```text
Data
+
Behavior
```

Example:

```cpp
class Robot
{
private:
    int battery;

public:
    void move();
};
```

---

## Encapsulation

Internal implementation is hidden from the outside.

```text
        Object
┌─────────────────────┐
│ private data        │
│ private behavior    │
│                     │
│ public interface    │
└─────────────────────┘
```

---

## Inheritance

A class can extend another class.

```text
Vehicle
   │
   └── Car
```

---

## Polymorphism

Different objects can respond differently to the same interface.

```cpp
Animal *animal = new Dog();

animal->makeSound();
```

The actual implementation depends on the runtime type.

---

## Abstraction

Expose what the object does while hiding how it does it.

```text
Interface
    ↓
Implementation
```

---

## Templates

Templates allow generic code.

```cpp
template <typename T>
T add(T a, T b)
{
    return a + b;
}
```

The same logic can work with different types.

---

## STL

The Standard Template Library provides reusable:

```text
Containers
Iterators
Algorithms
```

This changes how we approach programming.

Instead of implementing everything manually:

```text
Need a dynamic array?
    ↓
std::vector

Need a stack?
    ↓
std::stack

Need ordered key/value data?
    ↓
std::map

Need sorting?
    ↓
std::sort
```

The important skill becomes:

> Choosing the right tool for the problem.

---

# 🏗️ Module Dependencies

Each module prepares you for the next.

```text
CPP00
Basics
 │
 ↓
CPP01
Memory
 │
 ↓
CPP02
Operators
 │
 ↓
CPP03
Inheritance
 │
 ↓
CPP04
Polymorphism
 │
 ↓
CPP05
Exceptions
 │
 ↓
CPP06
Casts
 │
 ↓
CPP07
Templates
 │
 ↓
CPP08
STL Containers
 │
 ↓
CPP09
Algorithms + Complexity
```

---

# 🎯 What Each Module Teaches

| Module | Core Question |
|---|---|
| CPP00 | How do I write C++? |
| CPP01 | How does memory work in C++? |
| CPP02 | How can my classes behave like real types? |
| CPP03 | How can classes reuse and extend other classes? |
| CPP04 | How can the same interface produce different behavior? |
| CPP05 | How should my program handle exceptional situations? |
| CPP06 | How do I safely and intentionally convert between types? |
| CPP07 | How can I write reusable code for different types? |
| CPP08 | How do I use containers, iterators and algorithms? |
| CPP09 | How do I solve larger problems while thinking about performance? |

---

# 🧠 Problem-Solving Skills Developed

The C++ Modules are not only about syntax.

They develop several important programming skills.

## 1. Object-Oriented Thinking

You learn to model problems using:

```text
Objects
Classes
Relationships
Interfaces
```

## 2. Memory Awareness

You become comfortable thinking about:

```text
Stack
Heap
Ownership
Lifetime
Allocation
Deallocation
Copying
```

## 3. Code Organization

You learn to separate:

```text
Header
Implementation
Interface
Classes
Responsibilities
```

## 4. Generic Thinking

Templates teach you to think:

> What part of this algorithm actually depends on the type?

## 5. Data Structure Selection

CPP08/CPP09 force you to ask:

```text
What container should I use?
Why?
What is the complexity?
What are the memory implications?
```

## 6. Algorithmic Thinking

Especially in CPP09:

```text
Correctness
     +
Complexity
     +
Performance
```

all become important.

---

# ⚡ Complexity

One of the major lessons toward the end of the modules is that two correct algorithms can have completely different performance.

For example:

```text
Algorithm A
O(n²)

Algorithm B
O(n log n)
```

For small inputs, the difference might not matter.

For large inputs, the difference becomes significant.

This is why algorithmic complexity matters.

---

# 🧪 Testing Philosophy

For every module, testing should cover:

### Normal Input

```text
Expected valid behavior
```

### Boundary Cases

```text
0
1
maximum values
minimum values
empty input
```

### Invalid Input

```text
Wrong format
Invalid characters
Invalid ranges
```

### Memory

Check for:

```text
Leaks
Double free
Invalid access
Use-after-free
```

### Performance

Especially for CPP08/CPP09:

```text
Small input
Medium input
Large input
```

---

# 🛠️ Compilation

The traditional project requirements use strict compilation flags.

Example:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

A typical compilation command:

```bash
c++ -Wall -Wextra -Werror -std=c++98 \
    main.cpp \
    Class.cpp \
    -o program
```

Or simply:

```bash
make
```

depending on the project.

---

# 📁 Typical Project Structure

A clean C++ exercise can look like:

```text
ex00/
│
├── Makefile
├── main.cpp
├── Class.hpp
├── Class.cpp
└── ...
```

For larger exercises:

```text
ex03/
│
├── Makefile
├── main.cpp
│
├── include/
│   ├── Animal.hpp
│   ├── Dog.hpp
│   └── Cat.hpp
│
└── src/
    ├── Animal.cpp
    ├── Dog.cpp
    └── Cat.cpp
```

---

# 🧹 Code Quality

Good C++ code should be:

- Clear
- Consistent
- Modular
- Easy to review
- Easy to debug
- Properly encapsulated
- Free from unnecessary complexity

A good evaluator should be able to understand:

```text
What does this class represent?
What does this function do?
Who owns this memory?
Why is this container being used?
```

---

# 📈 Learning Progress

## Beginner

```text
CPP00
CPP01
```

Focus:

- Syntax
- Classes
- Objects
- Memory
- References
- Pointers

---

## Intermediate

```text
CPP02
CPP03
CPP04
CPP05
```

Focus:

- Operator overloading
- Inheritance
- Polymorphism
- Abstract classes
- Interfaces
- Exceptions

---

## Advanced

```text
CPP06
CPP07
CPP08
CPP09
```

Focus:

- Type systems
- RTTI
- Casting
- Templates
- STL
- Iterators
- Algorithms
- Complexity
- Performance

---

# 🏆 Final Skill Set

After completing CPP00 → CPP09, the goal is to be comfortable with:

### Language

- C++ syntax
- References
- Pointers
- Classes
- Constructors
- Destructors
- Operator overloading
- Templates

### OOP

- Encapsulation
- Inheritance
- Polymorphism
- Abstraction
- Interfaces

### Memory

- Stack
- Heap
- Dynamic allocation
- Object lifetime
- Copy semantics
- Deep copy

### Error Handling

- Exceptions
- Custom exceptions
- Exception hierarchies

### Type System

- Static casts
- Dynamic casts
- Reinterpretation
- RTTI

### STL

- `vector`
- `list`
- `deque`
- `stack`
- `map`
- Iterators
- Algorithms

### Algorithms

- Searching
- Sorting
- Binary search
- Parsing
- Reverse Polish Notation
- Merge-Insertion / Ford-Johnson

### Software Engineering

- Modular design
- Code reuse
- Abstraction
- Testing
- Debugging
- Performance analysis
- Complexity analysis

---

# 🧭 The Bigger Picture

The C++ Modules are not really ten independent projects.

They are one continuous learning path.

```text
              C
              │
              ▼
        ┌─────────────┐
        │   CPP00     │
        │   Basics    │
        └──────┬──────┘
               ▼
        ┌─────────────┐
        │   CPP01     │
        │   Memory    │
        └──────┬──────┘
               ▼
        ┌─────────────┐
        │   CPP02     │
        │  Operators  │
        └──────┬──────┘
               ▼
        ┌─────────────┐
        │   CPP03     │
        │ Inheritance │
        └──────┬──────┘
               ▼
        ┌─────────────┐
        │   CPP04     │
        │ Polymorphism│
        └──────┬──────┘
               ▼
        ┌─────────────┐
        │   CPP05     │
        │ Exceptions  │
        └──────┬──────┘
               ▼
        ┌─────────────┐
        │   CPP06     │
        │    Casts    │
        └──────┬──────┘
               ▼
        ┌─────────────┐
        │   CPP07     │
        │  Templates  │
        └──────┬──────┘
               ▼
        ┌─────────────┐
        │   CPP08     │
        │     STL     │
        └──────┬──────┘
               ▼
        ┌─────────────┐
        │   CPP09     │
        │  Algorithms │
        └──────┬──────┘
               ▼
        ┌─────────────────┐
        │ C++ Programmer  │
        │    Mindset      │
        └─────────────────┘
```

---

# ✅ Completion Checklist

## CPP00 — Basics

- [ ] ex00 — Megaphone
- [ ] ex01 — My Awesome PhoneBook
- [ ] ex02 — The Job Of Your Dreams

## CPP01 — Memory

- [ ] ex00 — BraiiiiiiinnnzzzZ
- [ ] ex01 — Moar brainz!
- [ ] ex02 — HI THIS IS BRAIN
- [ ] ex03 — Unnecessary violence
- [ ] ex04 — Sed is for losers
- [ ] ex05 — Harl 2.0
- [ ] ex06 — Harl filter

## CPP02 — Operators

- [ ] ex00 — My First Class in Orthodox Canonical Form
- [ ] ex01 — Towards a more useful Fixed class
- [ ] ex02 — Now we're talking
- [ ] ex03 — BSP

## CPP03 — Inheritance

- [ ] ex00 — Aaaaand... OPEN!
- [ ] ex01 — Serena, my love!
- [ ] ex02 — Repetitive work

## CPP04 — Polymorphism

- [ ] ex00 — Polymorphism
- [ ] ex01 — I don't want to set the world on fire
- [ ] ex02 — Abstract class
- [ ] ex03 — Interfaces & recap

## CPP05 — Exceptions

- [ ] ex00 — Mommy, when I grow up, I want to be a bureaucrat!
- [ ] ex01 — Form up, maggots!
- [ ] ex02 — No, you need form 28B, not 28C...
- [ ] ex03 — At least this beats coffee-making

## CPP06 — Casts

- [ ] ex00 — Scalar conversion
- [ ] ex01 — Serialization
- [ ] ex02 — Identify real type

## CPP07 — Templates

- [ ] ex00 — Start with a few functions
- [ ] ex01 — Iter
- [ ] ex02 — Array

## CPP08 — Containers & Iterators

- [ ] ex00 — Easyfind
- [ ] ex01 — Span
- [ ] ex02 — Mutated abomination

## CPP09 — STL & Algorithms

- [ ] ex00 — Bitcoin Exchange
- [ ] ex01 — Reverse Polish Notation
- [ ] ex02 — PmergeMe

---

# 📚 Resources

### 42 School

The C++ Modules are part of the 42 Common Core and are designed as a progressive introduction to C++ and Object-Oriented Programming.

### Recommended Books

- **C++ Primer** — Stanley B. Lippman, Josée Lajoie, Barbara E. Moo
- **The C++ Standard Library** — Nicolai M. Josuttis
- **The Art of Computer Programming, Vol. 3** — Donald Knuth

The latter is particularly relevant when studying sorting algorithms and algorithmic analysis.

---

# ⚠️ Academic Integrity

The purpose of the C++ Modules is to learn.

If you are using this repository as a reference:

```text
Read the concept
      ↓
Understand the problem
      ↓
Design your solution
      ↓
Write your own code
      ↓
Test it
      ↓
Review it
      ↓
Improve it
```

Do not copy solutions blindly.

The real achievement is not having a working executable.

The real achievement is being able to explain:

> **Why does my code work?**

---

# 🚀 Final Thoughts

The C++ Modules start with something as simple as:

```cpp
std::cout << "Hello";
```

and eventually ask you to reason about:

```text
Memory
Objects
Ownership
Inheritance
Polymorphism
Exceptions
Type systems
Templates
Containers
Iterators
Algorithms
Complexity
Performance
```

That progression is the real project.

By the end of CPP09, C++ should no longer feel like:

> "C with classes."

Instead, you should start seeing C++ as a language built around:

```text
Abstraction
+
Objects
+
Generic Programming
+
Reusable Components
+
Algorithms
+
Performance
```

---

<p align="center">
  <b>From C → C++ → OOP → STL → Algorithms</b>
  <br><br>
  <i>Keep learning. Keep building. Keep debugging. 🚀</i>
</p>
