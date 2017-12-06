#include "Personaje.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Personaje::Personaje(){
HP = 0;
Poder = 0;
Tipo = "";
Nombre = "";
XP = 0;
Magia = 0;
}
Personaje::Personaje(double pHP, int pPoder,string pTipo,string pNombre,int pXP,double pMagia){
	HP = pHP;
	Poder = pPoder;
	Tipo = pTipo;
	Nombre = pNombre;
	XP = pXP;
	Magia = pMagia;
}
double Personaje::getHP(){
	return HP;
}
int Personaje::getPoder(){
	return Poder;
}
string Personaje::getTipo(){
	return Tipo;
}
string Personaje::getNombre(){
	return Nombre;
}
int Personaje::getXP(){
	return XP;
}
double Personaje::getMagia(){
	return Magia;
}
void Personaje::setHP(double pHP){
	HP = pHP;
}
void Personaje::setPoder(int pPoder){
	Poder = pPoder;
}
void Personaje::setTipo(string pTipo){
	Tipo = pTipo;
}
void Personaje::setNombre(string pNombre){
	Nombre = pNombre;
}
void Personaje::setXP(int pXP){
	XP = pXP;
}
void Personaje::setMagia(double pMagia){
	Magia = pMagia;
}
Personaje::~Personaje(){}
//Para el archivos
void Personaje::write(ofstream& out){
	//HP
	int size = 0;
	out.write(reinterpret_cast<char*>(&HP),sizeof(int));
	//Poder
	out.write(reinterpret_cast<char*>(&Poder),sizeof(int));
	//Tipo
	size = Tipo.size();
	out.write(reinterpret_cast<char*>(&size),sizeof(int));
	out.write(Tipo.data(),Tipo.size());
	//Nombre
	size = Nombre.size();
	out.write(reinterpret_cast<char*>(&size),sizeof(int));
	out.write(Nombre.data(),Nombre.size());
	//XP
	out.write(reinterpret_cast<char*>(&XP),sizeof(int));
	//Magia
	out.write(reinterpret_cast<char*>(&Magia),sizeof(int));
}
void Personaje::read(ifstream& in){
	//HP
	int size;
        in.read(reinterpret_cast<char*>(&HP),sizeof(int));
	//Poder
	in.read(reinterpret_cast<char*>(&Poder),sizeof(int));
	//Tipo
        in.read(reinterpret_cast<char*>(&size),sizeof(int));
        char nameBuffer[size];
        in.read(nameBuffer,size);
        Tipo=nameBuffer;
	//Nombre
        in.read(reinterpret_cast<char*>(&size),sizeof(int));
        nameBuffer[size];
        in.read(nameBuffer,size);
        Nombre=nameBuffer;
	//XP
	in.read(reinterpret_cast<char*>(&XP),sizeof(int));
	//Magia
        in.read(reinterpret_cast<char*>(&Magia),sizeof(int));
}
