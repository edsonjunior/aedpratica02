#include <iostream>
#include "veiculo.h"
using namespace std;

int main() {

//	Veiculo v1("v1");
//	Terrestre t1("t1");
//	Aquatico aq1("aq1");
//	Aereo ae1("ae1");

	Veiculo * terr = new Terrestre("VT1");
//	((Terrestre *)terr)->setCapacidade(45);
	dynamic_cast<Terrestre*>(terr)->setCapacidade(45);

	Veiculo * aqua = new Aquatico("VAQ1");
//	((Aquatico *)aqua)->setCargaMaxima(12.5);
	dynamic_cast<Aquatico*>(aqua)->setCargaMaxima(12.5);

	Veiculo * aereo = new Aereo("VAE1");
	((Aereo *)aereo)->setVelocidadeMaxima(1040.5);

//	((Terrestre *)terr)->mover();
//	((Aquatico *)aqua)->mover();
	((Aereo *)aereo)->mover();

	delete terr;
	delete aqua;
	delete aereo;

	Veiculo * anfi = new Anfibio("Anfibio");
	anfi->mover();

	delete anfi;

	return 0;
}
