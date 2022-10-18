#include <iostream>
#include <stdio.h>
#include "veiculo.h"

//METODOS DO OBJETO VEICULO


//METODOS DO OBJETO TERRESTRE
void Terrestre::setCapacidade(int capacidade){
	this->cap_pass = capacidade;
}

int Terrestre::getCapacidade(){
	return this->cap_pass;
}

void Terrestre::mover(){
	cout << "O veículo terrestre " + this->nome + " moveu." << endl;
};

//METODOS DO OBJETO AQUATICO
void Aquatico::setCargaMaxima(float cargamaxima){
	this->carga_max = cargamaxima;
};

float Aquatico::getCargaMaxima(){
	return this->carga_max;
};

void Aquatico::mover(){
	cout << "O veículo aquático " + this->nome + " moveu." << endl;
};

//METODOS DO OBJETO AEREO
void Aereo::setVelocidadeMaxima(float velocidademaxima){
	this->vel_max = velocidademaxima;
}

float Aereo::getVelocidadeMaxima(){
	return this->vel_max;
}

void Aereo::mover(){
	cout << "O veículo Aereo " + this->nome + " moveu." << endl;
};
