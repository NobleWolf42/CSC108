/*
Write a program that prints the message, “Hello, my name is Hal!” Then, on a new line, the program should print the message “What would you like me to do?” Then it’s the user’s turn to type in an input. You haven’t yet learned how to do it—just use the following lines of code:

    *string user_input; <br>
    *getline(cin, user_input);

Finally, the program should ignore the user input and print the message “I am sorry, I cannot do that.”

This program uses the string data type. To access this feature, you must place the line

    *#include <string>

before the main function. Here is a typical program run. The user input is printed in boldface.

    *Hello, my name is Hal!
    *What would you like me to do?
    *<b>Clean up my room</b>
    *I am sorry, I cannot do that.

When running the program, remember to hit the Enter key after typing the last word of the input line.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

    // Prints "Hello, My name is Hal!";

    // Prints "What would you like me to do?";

    // Gets a string input from the user
    string user_input;
    getline(cin, user_input);

    // Prints "I am sorry, I cannot do that"

    return 0;
}