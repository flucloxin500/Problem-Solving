#include <iostream>

// Function to calculate the output based on input using quadratic equation
int calculateOutput(int x) {
    // Coefficients of the quadratic equation
    int a = 5; // coefficient of x^2
    int b = 2; // coefficient of x
    int c = -4; // constant term

    // Calculate the output using the quadratic equation
    int y = a * x * x + b * x + c;

    return y;
}

int main() {
    // Test the function with input 2
    int input1 = 2;
    int output1 = calculateOutput(input1);
    std::cout << "Input: " << input1 << ", Output: " << output1 << std::endl;

    // Test the function with input 9
    int input2 = 9;
    int output2 = calculateOutput(input2);
    std::cout << "Input: " << input2 << ", Output: " << output2 << std::endl;

    return 0;
}
