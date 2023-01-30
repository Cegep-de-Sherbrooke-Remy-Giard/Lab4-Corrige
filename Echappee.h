#pragma once

#include "Joueur.h"
#include "Gardien.h"

class Echappee
{
public:
	void executer(Joueur& joueur, Gardien& gardien);
	void executer(Joueur& joueur, Gardien& gardien, int typeLancer);
};

