#pragma once

#include <string>

class Joueur
{
private:
	std::string _nom;
	int _forceTirPoignet;
	int _forceLancerFrappe;

public:
	Joueur(std::string nom, int forceTirPoignet, int forceTirFrappe);
	std::string getNom() const;
	int getForceTirPoignet() const;
	int getForceLancerFrappe() const;
};

