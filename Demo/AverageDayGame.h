#pragma once
#include <iostream>
#include <string>
class AverageDayGame
{

public:
    AverageDayGame();
    void StartGame();

private:
    void MorningRoutine();
    void ChooseBreakfast();
    void GoToWork();
    void AfternoonActivities();
    void EveningRoutine();
};

