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
- Statement vs Expression - Statements are used when we want the program to perform an action. Expressions are used when we want the program to calculate a value.

## Module 2 - Functions

- main() is the only function that implicitly returns a value.
- **forward declaration** - tell the compiler about the existence of a function before we define the function's body. For this, use function declaration(also called function prototype).
- What would happen if you forward declare a function, but do not define it later on? - The compiler would function properly, and program compiles. However, the linker will complain that it cannot resolve the function call.
- Declarations that are not definitions are called _pure declarations_.
- Multiple files can be compiled together using the compiler with `g++ <file1> <file2> ... -o main`. While compiling, ensure that function declarations are made for each function used not in that particular file and sourced from someplace else.
- The compilation can be in any order for multiple files. The linker is the one which connects the dots.
- Compilation of two files with same function names can cause a naming collision, and thus cause the linker to return an error. For reference, see [name_coll1.cpp](./name_collisions/name_coll1.cpp) [name_coll2.cpp](./name_collisions/name_coll2.cpp), compiled with `gcc name_coll1.cpp name_coll2.cpp -o name_coll`.
- Most naming collisions occur in two cases:
  - Two (or more) identically named functions (or global variables) are introduced into separate files belonging to the same program. This will result in a linker error.
  - Two (or more) identically named functions (or global variables) are introduced into the same file. This will result in a compiler error.
- Solution for naming collisions? Namespaces. A region that allows to declare names inside of it for the purpose of disambiguation.
- In C++, any name not defined inside a class, function or a namespace belongs to the global namespace (sometimes called global scope). Executable statements are not allowed in the global namespace.
- The `::` in `std::cout` is the _scope resolution operator_.
- The _`using` directive_ is used to access namespaces without giving a namespace prefix. However, it is discouraged.
- [Translation phases](https://en.cppreference.com/w/cpp/language/translation_phases)
- The most noteworthy phase of translation is preprocessing, which involves the preprocessor. It scans for all preprocessor directives(instructions beginning with `#`) and perform the particular action.
- Types of preprocessor directives:
  - `#include`
  - `#define` - with and without substitution text
  - `#ifdef`/`#if defined()`, `#endif`, `#ifndef`/`#if !defined()`, `#if 0` - conditional compilation preprocessor
- Directives defined in one code file do not have impact on other code files in the same project.
- Header files allow to put declarations in one location and import them when needed.
- Header files consist of two parts:
  - Header guard
  - Actual content, which comprises of forward declarations for all the identifiers.
- When using angled brackets, the compiler preprocessor searches in the `include directories`. With double quotes, it first looks in the current directory.
- Duplicate function definitions can lead to compilation error, as there can be no duplicate definition in a file.
- Header guards can be used to deal with duplicate function. For reference, see [header guards](./header/header_guard.cpp)
- Modern compilers support a simpler, alternate form of header guards using the `#pragma` directive by using `#pragma once`. Still, prefer header guards as they are more reliable, and pragma is not officially a part of C++.

## Module 3 - Debugging C++ Programs

- When printing info for debugging purposes, use `std::cerr` instead of `std::cout`, as `std::cerr` is unbuffered. This ensures all debug output appears as soon as possible.
- We can enable/disable debugging using preprocessor directives (`ifdef ENABLE_DEBUG`, `endif`)
- Another alternative is using a logger.
