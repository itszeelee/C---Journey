// arrays and loop implementation 

#include <iostream>
#include <string>
using namespace std;

// This program demonstrates the use of arrays and loops to display even numbers and country names.
int main(){

    // Declare and initialize an array of even numbers and an array of country names
    int even_number [] = {12, 22, 32, 42, 52, 62, 72, 82, 
    92, 102};
    
    // Display the country names using an array of strings
    string country [] = {"Monaco", "France", "Switzerland", 
    "United Kingdom", "South Korea", "Japan", "United States",
    "Italy", "Canada", "Australia"};

    // Display the even numbers using a for loop
        for (int i = 0; i < 10; i++){
            cout << even_number[i] << endl;
        }

        // Display the country names using a while loop
        int i = 0;
        while (i < 10){
            cout << country[i] << endl;
            i++;
        }   

    return 0;
}