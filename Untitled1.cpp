#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    cout << "Hello world" << endl;
    
    // Set text color using a color code (13 for bright magenta)
    SetConsoleTextAttribute(h, 13);

    cout << "Hello world" << endl;
    
    
 SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    return 0;
}

