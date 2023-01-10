# Chapter 2 - Variables and Basic Types

## Types

- C++ is a statically typed languages, type checking is done at compile time. Thus, the compiler must know the type of every name used in the program.

- Primitive built-in types:
  - C++ defines a set of primitive types that include the arithmetic types and a special type named void.
  - Arithmetic types:
    - integral types (includes character and bool types)
    - floating-point types

[C++ Arithmetic Types](./assets/Screenshot%20from%202023-01-10%2017-52-38.png)

- The type long double is either 3 or 4 words (96 or 128 bits). (A word is typically 32 or 64 bits)
- unsigned int may be abbreviated as unsigned

**Rules of thumb when deciding which type to use**

- Use an unsigned type when you know that the values cannot be negative.
- Use int for integer arithmetic. short is usually too small and, in practice, long
  often has the same size as int. If your data values are larger than the minimum
  guaranteed size of an int, then use long long.
- Do not use plain char or bool in arithmetic expressions. Use them only to hold
  characters or truth values. Computations using char are especially problematic
  because char is signed on some machines and unsigned on others. If you
  need a tiny integer, explicitly specify either signed char or unsigned char.
- Use double for floating-point computations; float usually does not have
  enough precision, and the cost of double-precision calculations versus single-
  precision is negligible. In fact, on some machines, double-precision operations
  are faster than single. The precision offered by long double usually is unnec-
  essary and often entails considerable run-time cost.
