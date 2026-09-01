#include <iostream>

int main() {
    // Declare variables to store the numbers and their sum
    double num1, num2, sum;

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    std::std::cin >> num1;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    std::std::cin >> num2;

    // Calculate the sum using the + operator
    sum = num1 + num2;

    // Display the final result
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}
