// Introduction about myself using in C++ programming language

#include <iostream>
#include <string>
using namespace std;

// This program will ask the user to input their Name, Section, Course, Year Level, and Student Number.
int main() {
    string Name;
    string Section;
    string Course;
    string YearLevel;
    string StudentNumber;

    // Asking the user to input their Name, Section, Course, Year Level, and Student Number.
    cout << "Enter your Name: ";
    cin >> Name;

    cout << "Enter your Section: ";
    cin >> Section;

    cout << "Enter your Course: ";
    cin >> Course;

    cout << "Enter your Year Level: ";
    cin >> YearLevel;

    cout << "Enter your Student Number: ";
    cin >> StudentNumber;

// Concatenating the inputted information and displaying it to the user.
    cout << "\n Hello and Good Day! My Name " << Name <<
    " from Section " << Section << " taking up " << Course <<
    " currently in my " << YearLevel << " and my Student Number is " << StudentNumber << endl;  

}