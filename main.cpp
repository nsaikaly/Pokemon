#include "Pokemon.h"
#include <iostream>
using namespace std;

int main() {
	Pokemon starter("Gyrados", 100, 20, 5);
	Pokemon caca("Magikarp", 50, 5, 2);

	cout << "HP before attack: " << caca.GetHp() << endl;

	starter.Attack(caca);

	cout << "HP after attack: " << caca.GetHp() << endl;

}