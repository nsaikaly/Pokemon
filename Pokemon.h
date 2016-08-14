#pragma once

#include <iostream>
#include <string>
#include <vector>

class Pokemon {
	std::string mName;
	int mHP;
	int mDamage;
	double mArmor;
	const int mNumOfMoves = 4;


	//change int to Move* once Move class is complete
	std::vector<int> mMoves;

	//Helper function to check if Pokemon is alive
	bool IsAlive(Pokemon &p);

public:

	//Constructors
	Pokemon(std::string name, int hp, int damage, double armor);
	Pokemon();

	//Accessors
	const int GetHp() const;
	const int GetDamage() const;
	const int GetArmor() const;


	bool Attack(Pokemon &other);
	//const std::string AddMove(Pokemon &p);
	




};
