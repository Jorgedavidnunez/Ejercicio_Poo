//Persona = nombre, apellidos, direcci�n, tel�fono, fecha de nacimiento,dpi etc...
//Cliente = nit etc...
#include <iostream>
using namespace std;
class Persona{
	//atributos -- m�todos de acceso: protected, privado y publico
	protected : string nombres, apellidos, direccion;
				int telefono; 
	//constructor
	protected :
		Persona(){	
		}
		Persona(string nom,string ape, string dir, int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
		}			
	//metodos
	void mostrar();
}; 
