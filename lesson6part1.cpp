/*
lesson6part1
This program will output the characters that map to the ASCII 
codes 32 through 126. it will be using loops to iterate through the input values 
and output the corresponding character.
*/
#include <iostream>

using namespace std;

int main()
{
    
    int value1, value2; // setting upper and lower values
    cout << "Enter lower and upper values" << endl;
    cin >> value1;
    cin >> value2;
    // this is the while loop for the error message, checking if the value1 or
    // value2 is less than 32 or greater than 126, while also making sure that
    // value 1 is less than value 2
    while (value1 > value2 || value1 < 32 || value1 > 126 || value2 < 32 || value2 > 126){
        cout << "Values must be in range 32 to 126 inclusive" << endl;
        cout << "Enter lower and upper values" << endl;
        cin >> value1;
        cin >> value2;
    }
    
    // when the error while loop terminates and valid values are inputted, the 
    // code below will execute
    cout << "Characters for ASCII values between " << value1 << " and " << value2 << endl;
    cout << "----+----+----+----+" << endl;
    
    // set a new variable, count, equal to 0. what this variable will do is 
    // allow a new line to be made when the number of characters reaches 20
    int count = 0;
    
    // this is the while loop for the valid values. it will convert the values
    // into the corresponding values on the ASCII table
    while (value1 <= value2) {
        cout << static_cast<char>(value1); // static_cast is used to convert the int into a char data type
        value1++;
        count++;
        
        // if statement inside the while loop to determine whether or not the 
        // the remainder of the count variable is equal to 0. if so, it will
        // make a new line
        if (count % 20 == 0) {
            cout << endl;
        }
    }
    
    // final if statement is used to see whether a new line is even needed to 
    // be made. if the remainder is NOT 0, only THEN it will output a new line
    if (count % 20 != 0) {
            cout << endl;
    }
    cout << "----+----+----+----+" << endl;
    
    return 0;
}




