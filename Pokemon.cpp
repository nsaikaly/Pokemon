#include "Pokemon.h"


using namespace std;



Pokemon::Pokemon(string name, int hp, int damage, double armor) 
	: mName(name), mHP(hp), mDamage(damage), mArmor(1 - armor/10) //Diving armor by 10 gives us a percentage based reduction. 
																  //For exmaple a 2 for armor gives 0.2(20%) reduction of damage. The 1 before the subtraction
																  //allows us to multiply damage by the amount. With 2 for amor we would get 0.8(80%) damage reduction for mArmor.
{
}

Pokemon::Pokemon() 
	: mName("MissingNo"), mHP(100), mDamage(1), mArmor(0) 
{
}

bool Pokemon::Attack(Pokemon &pokemon) {
	//Change from attacker.mDamage to attacker.mMoves[whatever]->.mDamage
	//Basically it should say pokemon.mHP -= the damage of the attackers move
	pokemon.mHP -= (mDamage * pokemon.mArmor);
	return IsAlive(pokemon);
}


const int Pokemon::GetHp() const{
	return mHP;
}

const int Pokemon::GetDamage() const {
	return mDamage;
}
const int Pokemon::GetArmor() const {
	return mArmor;
}

bool Pokemon::IsAlive(Pokemon &p) {
	return (p.mHP <= 0) ? (false) : (true);
}

