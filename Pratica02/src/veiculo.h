
#include <iostream>
using namespace std;

#ifndef VEICULO_H_
#define VEICULO_H_

class Veiculo{
	protected:
			string nome;
	public:
			Veiculo(const char *nome){
				this->nome = string(nome);
				cout << "Veiculo " + this->nome + " criado." << endl;
			};
			virtual ~Veiculo(){
				cout << "Veiculo " + this->nome + " destru�do." << endl;
			};
			virtual void mover() = 0;
};

class Terrestre:public Veiculo{
	private:
		int cap_pass;
	public:
		Terrestre(const char *nome):Veiculo(nome){
			this->cap_pass = 5;
		};
		virtual ~Terrestre(){
			cout << "Ve�culo " + this->nome + " destru�do." << endl;
		};

		void setCapacidade(int capacidade);
		int getCapacidade();

		void mover();
};

class Aquatico:public Veiculo{
	private:
		float carga_max;
	public:
		Aquatico(const char *nome):Veiculo(nome){
			this->carga_max = 10;
		};
		virtual ~Aquatico(){
			cout << "Ve�culo " + this->nome + " destru�do." << endl;
		};

		void setCargaMaxima(float cargamaxima);
		float getCargaMaxima();

		void mover();
};

class Aereo:public Veiculo{
	private:
		float vel_max;
	public:
		Aereo(const char *nome):Veiculo(nome){
			this->vel_max = 100;
		};
		virtual ~Aereo(){
			cout << "Ve�culo " + this->nome + " destru�do." << endl;
		};

		void setVelocidadeMaxima(float velocidademaxima);
		float getVelocidadeMaxima();

		void mover();
};

//PARTE 5
//class Anfibio:public Terrestre, public Aquatico{
//
//}

#endif /* VEICULO_H_ */