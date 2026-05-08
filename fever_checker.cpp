#include <iostream>
using namespace std;

int main() {
    float temp;
    char choice;


    // Loop to continuously check body temperature until user decides to stop
    while (true) {
        cout << " Enter your body temp (in Celsius): ";
        cin >> temp;

        // Check the temperature range and provide feedback
        if (temp >= 36 && temp <= 37.5) {
            cout << " Normal temperature. You are healthy! " << endl;
        } else if (temp > 37.5 && temp <= 38) {
            cout << " Low fever. Rest and stay hydrated! " << endl;
        } else if (temp > 39 && temp <= 40) {
            cout << " High fever. Seek medical attention! " << endl;
        } else if (temp > 40) {
            cout << " Hyperpyrexia. Seek emergency medical attention! " << endl;
        } else {
            cout << " Temperature is below normal. Please consult consult a doctor! " << endl;

        } 

        // Ask user if they want to check another temperature
        cout << " Do you want to check another temperature? (Y/N): ";
        cin >> choice;


        // If user chooses 'N' or 'n', exit the loop and end the program
        if (choice == 'N' || choice == 'n') {
            cout << " Thank you for using the fever checker! Stay healthy! " << endl;
            break;
        }

        cout << endl;
    }

    return 0;
}