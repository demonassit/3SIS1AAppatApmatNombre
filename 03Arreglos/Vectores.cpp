#include <iostream>

using namespace std;

int main(){
	int a[50];
	int b[50];
	int c[50];
	int n, i;
	
	cout<<"Ingresa el limite del vector \n";
	cin>>n;
	
	cout<<"Ingresa los elementos del V1 \n";
	for(i = 0; i < n; i++){
		cout<<"Ingresa el elemento ["<<i<<"]\n";
		cin>>a[i];
	}
	
	cout<<"Ingresa los elementos del V2 \n";
	for(i = 0; i < n; i++){
		cout<<"Ingresa el elemento ["<<i<<"]\n";
		cin>>b[i];
	}
	
	//para sumarlo
	for(i = 0; i < n; i++){
		c[i] = a[i] + b[i];
		cout<<"Elemento: ["<<i<<"]\n";
	}
	
	cout<<"La suma del los vectores es: \n";
	for(i = 0; i < n; i++){
		c[i] = a[i] + b[i];
		cout<<" "<<c[i];
	}
	
}
