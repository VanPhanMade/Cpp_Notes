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
	Player(PlayerType _playerType);
	
};



