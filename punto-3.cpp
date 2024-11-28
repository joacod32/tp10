#include <iostream>
#include <math.h>
using namespace std;

int potencia( int a, int b){
int resultado = pow( a, b);
return resultado;	
}
int main(){
	int numbase;
	int exponente;
	
	cout<<"ingrese el numero base"<<endl;
	cin>>numbase;
	cout<<"ingresa el exponente"<<endl;
	cin>>exponente;
	cout<<"el resultado es "<<potencia(numbase , exponente);
}
