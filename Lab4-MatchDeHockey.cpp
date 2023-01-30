#include "Joueur.h"
#include "Gardien.h"
#include "Echappee.h"

#include <iostream>

using namespace std;

int main()
{
	Joueur lafleur("Guy Lafleur", 90, 90);
	Gardien roy("Patrick Roy", 85, 85);

	Echappee echappee;
	echappee.executer(lafleur, roy);

	echappee.executer(lafleur, roy, 1);
}
