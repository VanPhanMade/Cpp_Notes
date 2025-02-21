#include "TreasureCollection.h"

void TreasureCollection::StartCollection() {
    std::string input;
    bool keepGoing = true;

    std::cout << "Welcome to the Treasure Collection!\n";

    while (keepGoing) {
        std::cout << "\nChoose an action:\n";
        std::cout << "1. Add treasure\n";
        std::cout << "2. View treasures\n";
        std::cout << "3. Remove last treasure\n";
        std::cout << "4. Calculate total treasure value\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> input;

        if (input == "1") {
            std::cout << "Enter treasure value: ";
            std::cin >> input;
            if (IsValidNumber(input)) {
                AddTreasure(std::stoi(input));
            }
            else {
                std::cout << "Invalid number. Please enter a valid treasure value.\n";
            }
        }
        else if (input == "2") {
            ViewTreasures();
        }
        else if (input == "3") {
            RemoveLastTreasure();
        }
        else if (input == "4") {
            int total = CalculateTotalTreasure();
            std::cout << "Total treasure value: " << total << "\n";
        }
        else if (input == "5") {
            keepGoing = false;
        }
        else {
            std::cout << "Invalid option. Please choose a valid action.\n";
        }
    }

    std::cout << "Thank you for managing your treasures! Goodbye.\n";
}

bool TreasureCollection::IsValidNumber(const std::string& input) {
    try {
        std::stoi(input); // Try to convert to int
        return true; // Conversion successful
    }
    catch (...) {
        return false; // Invalid number
    }
}

void TreasureCollection::AddTreasure(int value) {
    treasures.push_back(value);
    std::cout << "Added treasure of value: " << value << "\n";
}

void TreasureCollection::ViewTreasures() {
    if (treasures.empty()) {
        std::cout << "Your treasure bag is empty!\n";
    }
    else {
        std::cout << "Treasures in your bag: ";
        for (int treasure : treasures) {
            std::cout << treasure << " ";
        }
        std::cout << "\n";
    }
}

void TreasureCollection::RemoveLastTreasure() {
    if (!treasures.empty()) {
        int removed = treasures.back();
        treasures.pop_back();
        std::cout << "Removed the last treasure of value: " << removed << "\n";
    }
    else {
        std::cout << "No treasures to remove!\n";
    }
}

int TreasureCollection::CalculateTotalTreasure() {
    int total = 0;
    for (int treasure : treasures) {
        total += treasure;
    }
    return total;
}
