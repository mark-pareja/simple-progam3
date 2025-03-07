#include <iostream>  // Include the input-output stream library

int main() {
    // Loop to print even numbers from 10 down to 0
    for (int i = 10; i >= 0; i -= 2) {  // Decrease i by 2 in each iteration
        std::cout << i << " ";  // Print the current value of i
    }

    std::cout << std::endl;  // Print a new line after the loop

    return 0;  // Indicate that the program executed successfully
}
