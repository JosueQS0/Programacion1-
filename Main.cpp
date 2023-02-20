#include "cliente.cpp"
#include <iostream>

using namespace std;

main (){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"ingresar nit: ";
	cin>>nit;
	cout<<"ingresar nombres: ";
	cin>>nombres;
	cout<<"ingresar apellidos: ";
	cin>>apellidos;
	cout<<"ingresar direccion: ";
	cin>>direccion;
	cout<<"ingresar telefono: ";
	cin>>telefono;
	
	//instancia de un objeto
	cliente obj=cliente(nombres, apellidos, direccion, telefono, nit);
	obj.mostrar();
	
	//cout<<"datos del cliente: "<<obj.getnit()<<","<<obj.getnombres()<<","<<obj.getapellidos()<<","<<obj.getdireccion()<<","<<obj.gettelefono()<<endl;
	
	/*cliente obj = cliente();
	obj.setnit(nit);
	obj.setnombre(nombres);
	obj.setapellidos(apellidos);
	obj.setdireccion(direccion);
	obj.settelefono(telefono);
	obj.mostrar();*/
}
