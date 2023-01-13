# Followed from learncpp-com

## Module 1 - C++ Basics

- **Preprocessor directive** - indicates that we are using a library or utility (`#include`, `#define`, `#ifdef`)
- In C++, direct memory access is discouraged, instead we access memory indirectly through an object.
- There are some flags which the C compiler provides
  - `-Werror` to convert warnings to errors.
  - `-Wall` to enable all type of warning triggers.
  - `-Wextra` enables some extra warning flags that are not enabled by `-Wall`.
  - `-Wsign-conversion` warns for implicit conversions that may change the sign of an integer value, like assigning a signed integer expression to an unsigned integer variable.
  - `-ggdb` for debugging
  - `-O2 -DNDEBUG` for release builds
- A named object is a variable, and the name of the object is called an identifier.
- **Types of Initialization**
  - Default
  - Copy (int a = 5)
  - Direct (int a(5))
  - Brace (also called uniform initialization or list initialization) (int a{5} or int a = {5})
- Brace initialization disallows 'narrowing conversions'. `int width {4.5}`, this returns an error as fractional value can't fit into an int, while copy and direct initialization would simply drop the fractional part.
- Remember that if you have `-Wall` flag specified as argument, any variable that is declared but not used in the program, will trigger an error. In C++17 standard however, you can use the `[[maybe_unused]]` attribute to tell the compiler that the variable may not be used.
- **std::endl vs '\n'**
  - Using std::endl can be inefficient, but it serves to flush the output buffer. However, std::cout often flushes output anyways, so having endl to flush output is rarely important.
  - Using '\n' can be faster, since it doesn't perform a flush operation.
- The C++ I/O library does not provide a way to accept keyboard input without the user having to press enter. For that in console applications, you can use 3rd party libraries like pdcurses, FXTUI, and cpp-terminal.
- Insertion operator (<<) and extraction operator (>>)
- Identifier naming rules:
  - The identifier can not be a keyword. Keywords are reserved.
  - The identifier can only be composed of letters (lower or upper case), numbers, and the underscore character.
  - The identifier must begin with a letter (lower or upper case) or an underscore. It can not start with a number.
  - C++ is case sensitive, and thus distinguishes between lower and upper case letters. nvalue is different than nValue is different than NVALUE.
- The number of operands that an operator takes as input is called the operator's **arity** (four types of arity - unary, binary, ternary, nullary(_the throw operator_))
- Operators are executed in order **PEMDAS**.
- All operators which define some behaviour (and not just return values) return their left operand.
