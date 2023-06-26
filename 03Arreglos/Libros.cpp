#include <iostream>

#include <string>

using namespace std;

int main(){
	string titulos[5];
	string autores[5];
	
	cout<<"Por favor ingrese la siguiente información del libro: \n";
	
	for(int i = 0; i < 5; i++){
		cout<<"\n Datos del libro : "<< i + 1 <<" \n";
		cout<<"Titulo: ";
		//cin>>titulos[i];
		getline(cin, titulos[i]);
		cout<<"Autor: ";
		//cin>>autores[i];
		getline(cin, autores[i]);
	}
}
