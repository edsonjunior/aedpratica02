//============================================================================
// Name        : Pratica02.cpp
// Author      : Edson
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "veiculo.h"
using namespace std;

int main() {

//	Veiculo v1("v1");
//	Terrestre t1("t1");
//	Aquatico aq1("aq1");
//	Aereo ae1("ae1");

	Veiculo * terr = new Terrestre("VT1");
	((Terrestre *)terr)->setCapacidade(45);

	Veiculo * aqua = new Aquatico("VQ1");
	((Aquatico *)aqua)->setCargaMaxima(12.5);

	Veiculo * aereo = new Aereo("VA1");
	((Aereo *)aereo)->setVelocidadeMaxima(1040.5);

	((Terrestre *)terr)->mover();
	((Aquatico *)aqua)->mover();
	((Aereo *)aereo)->mover();

	delete terr;
	delete aqua;
	delete aereo;



	return 0;
}
