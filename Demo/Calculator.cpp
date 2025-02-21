#include "Calculator.h"
void Calculator::StartCalculator() {
    std::string input1, input2, operatorInput;

    // Get the first number
    std::cout << "Enter the first number: ";
    std::cin >> input1;

    // Validate the first number
    while (!IsValidNumber(input1)) {
        std::cout << "Invalid input. Please enter a valid number: ";
        std::cin >> input1;
    }

    // Get the second number
    std::cout << "Enter the second number: ";
    std::cin >> input2;

    // Validate the second number
    while (!IsValidNumber(input2)) {
        std::cout << "Invalid input. Please enter a valid number: ";
        std::cin >> input2;
    }

    // Get the operator
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operatorInput;

    // Validate the operator
    while (!IsValidOperator(operatorInput)) {
        std::cout << "Invalid operator. Please enter one of (+, -, *, /): ";
        std::cin >> operatorInput;
    }

    // Convert inputs to double and char
    double num1 = std::stod(input1);
    double num2 = std::stod(input2);
    char op = operatorInput[0];

    // Perform calculation
    double result = PerformCalculation(num1, num2, op);
    std::cout << "Result: " << result << std::endl;
}

bool Calculator::IsValidNumber(const std::string& input) {
    try {
        std::stod(input); // Try to convert to double
        return true; // Conversion successful
    }
    catch (const std::invalid_argument&) {
        return false; // Invalid number
    }
    catch (const std::out_of_range&) {
        return false; // Number out of range
    }
}

bool Calculator::IsValidOperator(const std::string& input) {
    return input.size() == 1 && (input[0] == '+' || input[0] == '-' || input[0] == '*' || input[0] == '/');
}

double Calculator::PerformCalculation(double num1, double num2, char op) {
    switch (op) {
    case '+': return num1 + num2;
    case '-': return num1 - num2;
    case '*': return num1 * num2;
    case '/':
        if (num2 == 0) {
            std::cerr << "Error: Division by zero!\n";
            return 0; // Handle division by zero
        }
        return num1 / num2;
    default: return 0; // Should not reach here
    }
}