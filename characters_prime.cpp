//array nested loop

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    // ---------------------------------------------------------
    // ARRAY 1: 5X5 String Array of Barbie Characters
    // ---------------------------------------------------------
    string barbie_characters [5][5] = {
        {"Barbie", "Ken", "Skipper", "Teresa", "Christie"},
        {"Midge", "Stacie", "Chelsea", "Nikki", "Summer"},
        {"Raquelle", "Ryan", "Grace", "Renee", "Daisy"},
        {"Courtney", "Kira", "Dee Dee", "Kayla", "Blaine"},
        {"Whitneey", "Miko", "Dana", "Asha", "Liana"}
    };

    // ---------------------------------------------------------
    // ARRAY 2: 5X5 Integer Array of Prime Numbers
    // ---------------------------------------------------------

    int prime_numbers [5][5] = {
        {2, 3, 5, 7, 11},
        {13, 17, 19, 23, 29},
        {31, 37, 41, 43, 47},
        {53, 59, 61, 67, 71},
        {73, 79, 83, 89, 97}
    };

    // ---------------------------------------------------------
    // NESTED LOOPS: Print the 5X5 String Array and Integer Array
    // ---------------------------------------------------------

    cout << "Barbie Characters:" << endl;
    for (int row = 0; row < 5; row++){
        for (int col = 0; col < 5; col++){
            cout << setw(12) << barbie_characters[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Prime Numbers:" << endl;
    for (int row = 0; row < 5; row++){
        for (int col = 0; col < 5; col++){
            cout << setw(4) << prime_numbers[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}