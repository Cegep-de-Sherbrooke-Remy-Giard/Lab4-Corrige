#include "Joueur.h"

#include <string>

using namespace std;

Joueur::Joueur(string nom, int tirPoignet, int lancerFrappe) {
	_nom = nom;
	_forceTirPoignet = tirPoignet;
	_forceLancerFrappe = lancerFrappe;
}

string Joueur::getNom() const {
	return _nom;
}

int Joueur::getForceTirPoignet() const {
	return _forceTirPoignet;
}

int Joueur::getForceLancerFrappe() const {
	return _forceLancerFrappe;
}
