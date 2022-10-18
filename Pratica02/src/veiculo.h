
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
				cout << "Veiculo " + this->nome + " destruído." << endl;
			};
			virtual void mover() = 0;
};

class Terrestre:public virtual Veiculo{
	private:
		int cap_pass;
	protected:
		Terrestre():Veiculo("_terrestre_"){};
	public:
		Terrestre(const char *nome):Veiculo(nome){
			this->cap_pass = 5;
		};
		virtual ~Terrestre(){
			cout << "Veículo " + this->nome + " destruído." << endl;
		};

		void setCapacidade(int capacidade);
		int getCapacidade();

		void mover();
};

class Aquatico:public virtual Veiculo{
	private:
		float carga_max;
	protected:
		Aquatico():Veiculo("_aquático_"){};
	public:
		Aquatico(const char *nome):Veiculo(nome){
			this->carga_max = 10;
		};
		virtual ~Aquatico(){
			cout << "Veículo " + this->nome + " destruído." << endl;
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
			cout << "Veículo " + this->nome + " destruído." << endl;
		};

		void setVelocidadeMaxima(float velocidademaxima);
		float getVelocidadeMaxima();
		void mover();
};

//PARTE 5
class Anfibio:public Terrestre, public Aquatico{

	public:
		Anfibio(const char *nome):Veiculo(nome),Terrestre(),Aquatico(){};

		void mover(){
			Terrestre::mover();
			Aquatico::mover();
		};
};

#endif /* VEICULO_H_ */
