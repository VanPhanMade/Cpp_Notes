#include "AverageDayGame.h"

AverageDayGame::AverageDayGame() {
    // Constructor
}

void AverageDayGame::StartGame() {
    std::cout << "Welcome to the Average Day Game!\n";
    MorningRoutine();
}

void AverageDayGame::MorningRoutine() {
    std::cout << "It's a sunny morning. What do you want to do first?\n";
    std::cout << "1. Get out of bed\n";
    std::cout << "2. Snooze the alarm\n";
    std::cout << "Enter your choice (1 or 2): ";

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        ChooseBreakfast();
    }
    else {
        std::cout << "You snoozed the alarm. You wake up late and miss breakfast!\n";
        GoToWork();
    }
}

void AverageDayGame::ChooseBreakfast() {
    std::cout << "What do you want for breakfast?\n";
    std::cout << "1. Pancakes\n";
    std::cout << "2. Cereal\n";
    std::cout << "Enter your choice (1 or 2): ";

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "You enjoy delicious pancakes!\n";
    }
    else {
        std::cout << "You have a quick bowl of cereal.\n";
    }

    GoToWork();
}

void AverageDayGame::GoToWork() {
    std::cout << "You leave for work. How do you want to go?\n";
    std::cout << "1. Walk\n";
    std::cout << "2. Drive\n";
    std::cout << "Enter your choice (1 or 2): ";

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "You enjoy a pleasant walk to work.\n";
    }
    else {
        std::cout << "You drive through morning traffic.\n";
    }

    AfternoonActivities();
}

void AverageDayGame::AfternoonActivities() {
    std::cout << "It's lunchtime. What do you want to do?\n";
    std::cout << "1. Eat lunch at a restaurant\n";
    std::cout << "2. Bring lunch from home\n";
    std::cout << "Enter your choice (1 or 2): ";

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "You enjoy a nice meal at a restaurant with friends.\n";
    }
    else {
        std::cout << "You have a quiet lunch at your desk.\n";
    }

    EveningRoutine();
}

void AverageDayGame::EveningRoutine() {
    std::cout << "After work, what do you want to do?\n";
    std::cout << "1. Go home and relax\n";
    std::cout << "2. Go out with friends\n";
    std::cout << "Enter your choice (1 or 2): ";

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "You relax at home, watching your favorite shows.\n";
    }
    else {
        std::cout << "You have a fun night out with friends!\n";
    }

    std::cout << "Thank you for playing the Average Day Game!\n";
}
