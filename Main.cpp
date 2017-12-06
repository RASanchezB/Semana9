#include <iostream>
#include <string>
#include <fstream>
#include "Object.h"
#include "Personaje.h"

using namespace std;

int main(){
	cout<<endl;
	ofstream binario("RPG.dat",ios::binary | ios::app);
	cout<<"Creacion de personaje"<<endl;
	cout<<endl;
	cout<<"Ingrese su nombre"<<endl;
	string Nombre;
	cin>>Nombre;
	cout<<"Ingrese su tipo"<<endl;
	string Tipo;
	cin>>Tipo;
	cout<<"Ingrese la cantidad de HP que tiene"<<endl;
	double HP;
	cin>>HP;
	cout<<"Ingrese un numero para indicar su poder"<<endl;
	int Poder;
	cin>>Poder;
	cout<<"Ingrese cuanto XP tiene"<<endl;
	int XP;
	cin>>XP;
	cout<<"Ingrese un numero para indicar el poder de su magia"<<endl;
	double Magia;
	cin>>Magia;
	Personaje P = Personaje(HP,Poder,Tipo,Nombre,XP,Magia);
	P.write(binario);
	return 0;
}
