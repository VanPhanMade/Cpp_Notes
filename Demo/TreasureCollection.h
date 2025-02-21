#pragma once

#include <iostream>
#include <vector>
#include <string>

/// <summary>
/// Demo used to demonstrate the string and vector standard libraries
/// </summary>
class TreasureCollection {
public:
    void StartCollection();

private:
    bool IsValidNumber(const std::string& input);
    void AddTreasure(int value);
    void ViewTreasures();
    void RemoveLastTreasure();
    int CalculateTotalTreasure();

    std::vector<int> treasures;
};

