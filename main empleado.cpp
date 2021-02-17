#include "Empleado.cpp"
#include <iostream>
#include <stdlib.h>
using namespace std;
main(){
	string nombres, apellidos, direccion, puesto;
	int telefono, codigo_empleado;
	float sueldo;
	system("color 70");
	cout<<"Ingrese el codigo de empleado: ";
	cin>>codigo_empleado;
	cout<<"Ingrese su nombre: ";
	cin>>nombres;
	cout<<"Ingrese su apellido: ";
	cin>>apellidos;
	cout<<"Ingrese la direccion: ";
	cin>>direccion;
	cout<<"Ingrese el telefono: ";
	cin>>telefono;
	cout<<"Ingrese el sueldo: ";
	cin>>sueldo;
	cout<<"Ingrese el puesto: ";
	cin>>puesto;
	Empleado emp = Empleado();
	emp.setNombres(nombres);
	emp.setApellidos(apellidos);
	emp.setApellidos(apellidos);
	emp.setDireccion(direccion);
	emp.setTelefono(telefono);
	emp.setCodigo(codigo_empleado);
	emp.setSueldo(sueldo);
	emp.setPuesto(puesto);
	cout<<"____________________________________________\n";		
	cout<<"Su informacion como empleado es: \n";
	cout<<"Nombres: "<<emp.getNombres()<<endl;
	cout<<"Apellidos: "<<emp.getApellidos()<<endl;
	cout<<"Direccion: "<<emp.getDireccion()<<endl;
	cout<<"Telefono: "<<emp.getTelefono()<<endl;
	cout<<"Codigo de empleado: "<<emp.getCodigo()<<endl;
	cout<<"Sueldo: "<<emp.getSueldo()<<endl;
	cout<<"Puesto: "<<emp.getPuesto()<<endl;		
}	
