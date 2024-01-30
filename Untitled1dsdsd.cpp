#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // Get the current year
    int currentYear = 2024; // Change this with the current year if needed

    int birthYear = 0;

    // Prompt user to enter their birth year
    cout << "Enter your birth year: ";
    cin >> birthYear;

    // Calculate age
    int age = currentYear - birthYear;

    // Display age
    cout << "You are " << age << " years old." << endl;

    return 0;
}

