#include "Tir.h"

#include <stdlib.h>
#include <time.h>

void Tir::setForceDuTir(int forceDuTir) {
	_forceDuTir = forceDuTir;
}

void Tir::setTalentDuGardien(int talentDuGardien) {
	_talentDuGardien = talentDuGardien;
}

bool Tir::executer() {
	int forceCalculee = rand() % _forceDuTir + 1;
	int talentCalculee = rand() % _talentDuGardien + 1;
	return talentCalculee < forceCalculee;
}