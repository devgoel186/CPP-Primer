# Followed from learncpp-com

## Module 1 - C++ Basics

- Preprocessor directive - indicates that we are using a library or utility (`#include`, `#define`, `#ifdef`)
- In C++, direct memory access is discouraged, instead we access memory indirectly through an object.
- A named object is a variable, and the name of the object is called an identifier.
- **Types of Initialization**
  - Default
  - Copy (int a = 5)
  - Direct (int a(5))
  - Brace (also called uniform initialization or list initialization) (int a{5} or int a = {5})
- Brace initialization disallows 'narrowing conversions'. `int width {4.5}`, this returns an error as fractional value can't fit into an int, while copy and direct initialization would simply drop the fractional part.