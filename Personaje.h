#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <string>
#include <iostream>
#include <fstream>
#include "Object.h"
using namespace std;
class Personaje{
	private:
		double HP;
		int Poder;
		string Tipo;
		string Nombre;
		int XP;
		double Magia;
	public:
		Personaje();
		Personaje(double,int,string,string,int,double);
		//getters
		double getHP();
		int getPoder();
		string getTipo();
		string getNombre();
		int getXP();
		double getMagia();
		//setters
		void setHP(double);
		void setPoder(int);
		void setTipo(string);
		void setNombre(string);
		void setXP(int);
		void setMagia(double);
		//destructores
		~Personaje();
		//Para archivos
		void write(ofstream&);
	        void read(ifstream&);
};
#endif
