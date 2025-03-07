#include <iostream>  // Include the input-output stream library

int main() {
    char ch;  // Variable to store user input

    // Loop to take 5 character inputs from the user
    for (int i = 1; i <= 5; i++) {
        std::cout << "Enter a character: ";
        std::cin >> ch;  // Take input from the user

        // If the user enters 'n', exit the loop immediately
        if (ch == 'n') {
            std::cout << "Exiting loop as 'n' was entered." << std::endl;
            break;  // Terminate the loop
        }
    }

    return 0;  // Indicate successful execution
}
