#include <iostream>  // Include the input-output stream library

int main() {
    // Outer loop to iterate through numbers from 0 to 5
    for (int i = 0; i <= 5; i++) {
        std::cout << "Multiplication Table for " << i << ":" << std::endl;

        // Inner loop to generate multiplication from 1 to 10
        for (int j = 1; j <= 10; j++) {
            std::cout << i << " x " << j << " = " << (i * j) << std::endl;
        }

        std::cout << std::endl;  // Print a blank line for better readability
    }

    return 0;  // Indicate successful execution
}
