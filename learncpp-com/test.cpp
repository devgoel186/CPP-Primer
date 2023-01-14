#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    /* Running the above line of code gives
    the following error, with -Wall and -Werror flags enabled
    test.cpp:11:9: error: unused variable ‘a’ [-Werror=unused-variable]
    11 |     int a = 5;
       |         ^
    cc1plus: all warnings being treated as errors
    */

    [[maybe_unused]] int a = 5;
    cout << 2 * 3 << endl;
    return 0;
}