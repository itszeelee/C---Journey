// ============================================================
//  BASIC C++ CALCULATOR
//  Operations: Addition, Subtraction, Multiplication, Division
// ============================================================

// --- HEADER FILES ---
#include <iostream>   // For cin (input) and cout (output)
#include <limits>     // For clearing bad input

using namespace std;  // Lets us write cout instead of std::cout


// --- FUNCTION PROTOTYPES ---
// Tell the compiler these functions exist before main()
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
void   displayMenu();
bool   getNumbers(double &a, double &b);


// ============================================================
//  MAIN FUNCTION — program starts here
// ============================================================
int main() {

    int    choice;       // Stores the user's menu selection
    double num1, num2;   // The two numbers to operate on
    double result;       // Stores the answer
    char   again;        // Does the user want to go again?

    cout << "====================================\n";
    cout << "       BASIC C++ CALCULATOR         \n";
    cout << "====================================\n";

    // --- do...while loop ---
    // Runs at least once, then repeats if user presses 'y'
    do {
        displayMenu();

        cout << "Enter your choice (1-4, 0 to exit): ";
        cin >> choice;

        // --- Input validation ---
        // If user typed letters instead of a number, cin fails
        if (cin.fail()) {
            cin.clear();                                         // Reset error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input
            cout << "Invalid input. Please enter a number.\n\n";
            continue; // Restart the loop
        }

        // --- switch: jump to the matching case ---
        switch (choice) {

            case 1: // Addition
                if (getNumbers(num1, num2)) {
                    result = add(num1, num2);
                    cout << "\nResult: " << num1 << " + " << num2 << " = " << result << "\n";
                }
                break; // Exit the switch (without this, it falls into case 2!)

            case 2: // Subtraction
                if (getNumbers(num1, num2)) {
                    result = subtract(num1, num2);
                    cout << "\nResult: " << num1 << " - " << num2 << " = " << result << "\n";
                }
                break;

            case 3: // Multiplication
                if (getNumbers(num1, num2)) {
                    result = multiply(num1, num2);
                    cout << "\nResult: " << num1 << " * " << num2 << " = " << result << "\n";
                }
                break;

            case 4: // Division
                if (getNumbers(num1, num2)) {
                    result = divide(num1, num2);
                    // divide() returns -9999 as a signal that division by zero happened
                    if (result != -9999) {
                        cout << "\nResult: " << num1 << " / " << num2 << " = " << result << "\n";
                    }
                }
                break;

            case 0: // Exit
                cout << "\nGoodbye!\n";
                return 0;

            default: // Catches anything outside 0-4
                cout << "\nInvalid choice. Please select 0-4.\n";
        }

        cout << "\nCalculate again? (y/n): ";
        cin >> again;
        cout << "\n";

    } while (again == 'y' || again == 'Y');

    cout << "Goodbye!\n";
    return 0;
}


// ============================================================
//  FUNCTION DEFINITIONS
// ============================================================

// Shows the menu options
void displayMenu() {
    cout << "\n----- MENU -----\n";
    cout << "1. Addition    (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiply    (*)\n";
    cout << "4. Division    (/)\n";
    cout << "0. Exit\n";
    cout << "----------------\n";
}

// Asks user for two numbers
// '&' means we modify the original variables in main(), not a copy
bool getNumbers(double &a, double &b) {
    cout << "Enter first number:  ";
    cin >> a;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid number.\n";
        return false;
    }

    cout << "Enter second number: ";
    cin >> b;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid number.\n";
        return false;
    }

    return true; // Both numbers OK
}

// Basic math functions — each takes two doubles, returns one double
double add(double a, double b)      { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }

// Division guards against dividing by zero
double divide(double a, double b) {
    if (b == 0) {
        cout << "\nError: Cannot divide by zero!\n";
        return -9999; // Sentinel value = signals something went wrong
    }
    return a / b;
}