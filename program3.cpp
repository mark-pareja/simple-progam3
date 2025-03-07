#include <iostream>  // Include the input-output stream library

int main() {
    int sum = 0;  // Variable to store the sum

    // Loop through the series from 5 to 50, incrementing by 3
    for (int i = 5; i <= 50; i += 3) {
        sum += i;  // Add the current term to the sum
    }

    // Print the final sum
    std::cout << "Sum of the series: " << sum << std::endl;

    return 0;  // Indicate successful execution
}
