#pragma once
enum PlayerType
{
	Fighter,
	Healer,
	Archer,
	Mage,
};

class Player
{
private:
	PlayerType playerType;
protected:

public:
	Player();
	Player(PlayerType _playerType);
	int Accounts = 21;
	
};



