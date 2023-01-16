/*
To use this file for logging, use plog logging library C++,
and pass it as an include path parameter or specify in code editor.
*/

#include <iostream>
#include <plog/Log.h> // Step 1: include the logger headers
#include <plog/Initializers/RollingFileInitializer.h>

int getUserInput()
{
    PLOGD << "getUserInput() called"; // PLOGD is defined by the plog library

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    plog::init(plog::debug, "Logfile.txt"); // Step 2: initialize the logger

    PLOGD << "main() called"; // Step 3: Output to the log as if you were writing to the console

    int x{getUserInput()};
    std::cout << "You entered: " << x;

    return 0;
}