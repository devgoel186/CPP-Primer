# Chapter 1 - Getting Started

## 1.1 - Writing a Simple C++ Program

- return type, function name, parameter list, function body
- main function must have a return type of int
- return of 0 = success, else = error
- note that .cc, .cxx, .cpp, .cp, .C are also valid extension formats for cpp files
- windows systems name the executables as .exe, however UNIX compilers would name them a.out
- to check the exit status of the last executed command, execute `echo $?` for UNIX systems. For Windows systems, echo %ERRORLEVEL%
- apart from cin (istream object), and cout (ostream object), there's also 2 other ostream objects, cerr and clog

## I/O Handling

- << takes two operands, ostream object and the value, and writes the value on the ostream object
- `std::endl` is called a manipulator, for ending the current line and flushing the device buffer
- ostream data actually resides in memory before it is written to the ostream, `std::endl` can force buffer flush to write it on the output stream

**Note**: Programmers often add print statements during debugging. Such state-
ments should always flush the stream. Otherwise, if the program crashes,
output may be left in the buffer, leading to incorrect inferences about
where the program crashed.

**Note**: In command-line, end of file in UNIX systems is indicated by ctrl+d, while in Windows systems, its ctrl+z

## Classes

- Classes defined are accessed through header files, which can hold the suffix of .h, .H, .hpp, .hxx.
