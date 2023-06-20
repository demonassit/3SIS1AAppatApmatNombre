#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main() {
	//manejan tipos de variables
	int edad;
	cout<<"Ingresa tu edad: ";
	cin>>edad;
	if(edad >=18){
		cout<<"Es mayor de edad"<<endl;
	}else{
		cout<<"Es menor de edad\n";
	}
	cout<<"Fin del programa";
	
	return 0;
}
