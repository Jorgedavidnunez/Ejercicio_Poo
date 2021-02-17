#include "Cliente.cpp"
#include <iostream>
#include <stdlib.h>
using namespace std;
main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	system("color 70");
	cout<<"Ingrese el nit: ";
	cin>>nit;
	cout<<"Ingrese el nombre: ";
	cin>>nombres;
	cout<<"Ingrese el apellido: ";
	cin>>apellidos;
	cout<<"Ingrese la direccion: ";
	cin>>direccion;
	cout<<"Ingrese el telefono: ";
	cin>>telefono;
	//Instanciar un objeto
	//Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	//obj.mostrar();
	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	cout<<"____________________________________________\n";
	cout<<"Su informacion como cliente es:\n";
	cout<<"Nit: "<<obj.getNit()<<endl;
	cout<<"Nombres: "<<obj.getNombres()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;		
}	
