/*
Ejemplo de sentencias de control
*/

#include<iostream>

using namespace std;


int main(){
	//vamos a ver el uso de sentencias
	//do while
	//hacer mientras
	int i = 1;
	/*do{
		//vamos a crear un programa que imprima
		//hasta el 10
		cout<<"Imprimir numeros"<<endl;
		
		cout<<i<<endl;
		i++;
	}while(i<11);
	
	
	//while mientras
	int count = 1;
	while(count <=10){
		cout<<"Imprimir numeros"<<endl;
		
		cout<<count<<endl;
		count++;
	}
	*/
	
	int seleccion;
	
	do{
		cout<<"\n Menu 1, 2, 3, y otra opcion es salir\n";
		cout<<"Opcion1\n";
		cout<<"Opcion2\n";
		cout<<"Opcion3\n";
		cout<<"Salir\n";
		
		cin>>seleccion;
		
		switch(seleccion){
			case 1:
				cout<<"Esta es la opcion 1";
				break;
			case 2:
				cout<<"Esta es la opcion 2";
				break;
			case 3:	
				cout<<"Esta es la opcion 3";
				break;	
			default: 
				cout<<"ayos";
				break;	
		}
	}while((seleccion > 0)&&(seleccion <4));
}
