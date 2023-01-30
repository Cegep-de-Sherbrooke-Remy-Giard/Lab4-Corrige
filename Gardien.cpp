#include "Gardien.h"

using namespace std;

Gardien::Gardien(string nom, int talentTirPoignet, int talentLancerFrappe) {
	_nom = nom;
	_talentTirPoignet = talentTirPoignet;
	_talentLancerFrappe = talentLancerFrappe;
}

string Gardien::getNom() const {
	return _nom;
}

int Gardien::getTalentTirPoignet() const {
	return _talentTirPoignet;
}

int Gardien::getTalentLancerFrappe() const {
	return _talentLancerFrappe;
}