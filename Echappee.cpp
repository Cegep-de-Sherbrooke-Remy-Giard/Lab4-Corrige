#include "Echappee.h"
#include "Tir.h"

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Echappee::executer(Joueur& joueur, Gardien& gardien) {
	srand(time(NULL));

	// trouver type de lancer
	int typeLancer = rand() % 2 + 1;

	executer(joueur, gardien, typeLancer);
}

void Echappee::executer(Joueur & joueur, Gardien & gardien, int typeLancer) {

	cout << joueur.getNom() << " se lance en échappée ..." << endl;
	cout << "Il arrive devant " << gardien.getNom() << endl;

	// trouver la force du tir et effectuer le lancer
	Tir tir; 

	if (typeLancer > 1) {
		// c'est un tir du poignet
		cout << joueur.getNom() << " effectue un tir du poignet ..." << endl;

		tir.setForceDuTir(joueur.getForceTirPoignet());
		tir.setTalentDuGardien(gardien.getTalentTirPoignet());
	}
	else {
		// c'est un lancer frapper
		cout << joueur.getNom() << " effectue un lancer frappé ..." << endl;

		tir.setForceDuTir(joueur.getForceLancerFrappe());
		tir.setTalentDuGardien(gardien.getTalentLancerFrappe());
	}

	// déterminer s'il y a but
	bool estBut = tir.executer();

	// imprimer le résultat du tir à l'écran
	if (estBut) {
		cout << "ET C'EST LE BUT !" << endl;
	}
	else {
		cout << " OH!  Arrêt de " << gardien.getNom() << endl;
	}
}
