#pragma once

#include <string>

class Gardien
{
private:
	std::string _nom;
	int _talentTirPoignet;
	int _talentLancerFrappe;

public:
	Gardien(std::string, int, int);
	std::string getNom() const;
	int getTalentTirPoignet() const;
	int getTalentLancerFrappe() const;
};

