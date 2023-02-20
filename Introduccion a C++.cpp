#include <iostream>

using namespace std; // donde se encuentran todas las librerias estandar 
main (){
	
	/*
	// variable: es un espacio de memoria reservado para almacenar un valor que corresponde a un tioi de dato.  
	// cout<< "Hola mundo ..."<<nombre<<endl; 
	//tipo, nombre de la variable. 
	//C++ Case-sensitive: Distincion entre mayúsculas y minúsculas 
	// Estilo de nombre para variables: Camel case
	// para las clase metodo y funciones LoweCamelCase y para variables Snake case
	// restricion el nombre de una variable no puede: iniciar con numero, no puede terner caracteres especiales, no espacios en blaco 


	string nombreCompleto ="Pablo Alvarez"; //LoweCamelCase
	string NombreCompleto ="Pablo Alvarez 2"; // UpperCamelCase
	string nombre_completo ="Pablo Alvarez 3"; //Snake case 
	cout<<nombreCompleto<<endl;
	cout<<NombreCompleto<<endl;
	cout<<nombre_completo<<endl;                
	system ("pause");
	
	//Variables Numericas 
	//Numeros enteros 
	// como declarar una variable: tipo-nombre de la varibale- valor-;
	short entero_corto= 32767; // 2 Bytes (-32,768 a 32,767) 
	int entero= 2147483647; // 4 Bytes (-2,147,483,648 a 2,147,483,647)
	long long entero_largo= 12147483647; // 8 Bytes 
	unsigned long long int i_entero_largo=18446744073709551615; // 10 Bytes 
	cout<<"short: "<< entero_corto <<endl;
	cout<<"int: "<< entero <<endl;
	cout<<"long: "<< entero_largo <<endl;
	cout<<"long int: "<< i_entero_largo <<endl;
	unsigned int int_sin_signo= 2;
	cout<<"int sin signo: "<< int_sin_signo <<endl;
	
	// Numeros reales de punto flotante 
	float numero_decimal = 100.235; //4 Bytes 
	cout<<"float: "<< numero_decimal <<endl;
	double numero_decimal = 100.235; //8 Bytes 
	cout<<"double: "<< numero_decimal <<endl;
	long double numero_decimal = 100.235; //10 Bytes 
	cout<<"double: "<< numero_decimal <<endl;
	
	//Caracteres 
	char cr='T'; 
	char asc = 61; 
	cout<<"char: "<< cr<< endl;
	cout<<"ascii: "<< asc<< endl;	
	
	// logicos 1 o 0; True o False 
    bool logico=true; 
 
    cout<<logico<<endl;

	*/
    char cadena[6]= "texto"; 
    string cadena_texto="Hola Soy Pablo";
    cout<<"Cadena: "<<cadena<<endl;
    cout<<"string: "<<cadena_texto<<endl;
    
    char saludo[4]; 
    saludo[0]='H'; 
    saludo[1]='O';
    saludo[2]='L'; 
    saludo[3]='A';
    cout<<"array: "<<saludo<<endl; 
    cout<<"array: "<<saludo[0]<<saludo[1]<<saludo[2]<<saludo[3]<<endl;
    
    int codigo[3]; 
    codigo[0]=1280; 
    codigo[1]=3800;
	codigo[2]=12451280; 
	cout<<"Codigos: "<<codigo[0]<<","<<codigo[1]<<","<<codigo[2]<<endl; 
	
	string paises[3];
	paises[0]= "Guatemala";
	paises[1]= "El Salvador";
	paises[2]= "Honduras";
	cout<<"Paises: "<<paises[0]<<","<<paises[1]<<","<<paises[2]<<endl;
	system ("pause");
	
	//A continuacion Estructuas de Control 
} 
