/*
Funciones

Las funciones son invocadas desde otras funciones
con excepcion de una funcion global

main()

3 caracteristicas de una funcion

definicion
declaracion
llamada

tipo nombre_funcion (tipo argumento1, 
tipo argumento2, tipo argumento n){
sentencias
return expresion
}


double calcula_media(double num1, double num2){
	double media;
	media = (num1 + num2)/2;
	return media;
*/


#include <iostream>

using namespace std;

//funcion

//double calcula_media(double, double); 
//declaracion
/*
double calcula_media(double num1, double num2){
	double media;
	media = (num1 + num2)/2;
	return media;
}

int main(){
	double numero1, numero2;
	cout<<"Introduzca el primer numero\n";
	cin>>numero1;
	cout<<"Introduzca el segundo numero\n";
	cin>>numero2;
	//invocacion
	double resultado = calcula_media(numero1, numero2);
	cout<<"La media de "<<numero1<< " y "<<numero2
	<<" es "<<resultado<< ". \n ";
}
*/

//funciones void
/*
void imprime_cadena(string cadena){
	cout<<cadena<<endl;
}

int main(){
	string cadena = "Hola";
	imprime_cadena(cadena);
	imprime_cadena(" mundo\n");
}
*/

//funciones sin argumentos

void imprime_mensaje(){
	cout<<"Este programa es kawaii";
}

int main(){
	//string cadena ="jola";
	imprime_mensaje();
}
