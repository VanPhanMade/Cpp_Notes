#include "ArrayDemo.h"

void ArrayDemo::RunDemo() {
    std::cout << "Array Demo\n";
    VisualizeArray();
    std::cout << "\nMulti-Dimensional Array Demo\n";
    VisualizeMultiDimensionalArray();
    std::cout << "\nString Demo\n";
    VisualizeStrings();
    std::cout << "\nString Operations Demo\n";
    PerformStringOperations();
}

void ArrayDemo::VisualizeArray() {
    // 1D Array Visualization
    int emptyArray[6];
    int array[5] = { 1, 2, 3, 4, 5 };
    std::cout << "1D Array Elements: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void ArrayDemo::VisualizeMultiDimensionalArray() {
    // 2D Array Visualization
    int multiArray[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "2D Array Elements:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << multiArray[i][j] << " ";
        }
        std::cout << std::endl; // New line for each row
    }
}

void ArrayDemo::VisualizeStrings() {
    // String Visualization
    std::string str = "Hello, C++!";
    std::cout << "String: " << str << std::endl;
    std::cout << "Length of string: " << str.length() << std::endl;
    std::cout << "First character: " << str[0] << std::endl;
}

void ArrayDemo::PerformStringOperations() {
    // String Operations
    std::string str1 = "Hello";
    std::string str2 = "World";

    // Concatenation
    std::string concatenated = str1 + " " + str2;
    std::cout << "Concatenated String: " << concatenated << std::endl;

    // Substring
    std::string substring = concatenated.substr(6, 5); // Get "World"
    std::cout << "Substring: " << substring << std::endl;

    // Find
    size_t position = concatenated.find("World");
    if (position != std::string::npos) {
        std::cout << "'World' found at position: " << position << std::endl;
    }
    else {
        std::cout << "'World' not found" << std::endl;
    }
}
