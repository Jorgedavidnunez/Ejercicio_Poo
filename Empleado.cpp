#include "Persona.cpp" 
#include <iostream>
using namespace std;
class Empleado : protected Persona{
	private : int codigo_empleado;
			  float sueldo;
			  string puesto;
	public :
	Empleado(){
	}
	Empleado(string nom, string ape, string dir, int tel, int cod, float sue, string pue) : Persona(nom,ape,dir,tel){
		codigo_empleado = cod;
		sueldo = sue;
		puesto = pue;
	}
	
	void setCodigo(int cod){codigo_empleado = cod;};
	void setSueldo(float sue){sueldo = sue;};
	void setPuesto(string pue){puesto = pue;};
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	
	int getCodigo(){return codigo_empleado;}
	float getSueldo(){return sueldo;}
	string getPuesto(){return puesto;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	
	
};
