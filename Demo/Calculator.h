#pragma once

#include <iostream>
#include <string>

class Calculator {
public:
    void StartCalculator();

private:
    bool IsValidNumber(const std::string& input);
    bool IsValidOperator(const std::string& input);
    double PerformCalculation(double num1, double num2, char op);
};

