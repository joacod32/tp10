#include <iostream>
using namespace std;

bool esPrimo(int numero){
	if (numero <= 1) return false;
	for (int i = 2; i <= numero / 2; i++) {
		if (numero % i == 0) {
			return false;
		}
	}
	return true;
}
int main(){
	int numero;
	cout<<"ingresa un numero";
	cin>>numero;
	if(esPrimo(numero)) {
		cout<<numero<<"es un numero primo"<<endl;
	}else{
		cout<<numero<<" no es un numero primo"<<endl;
	
	}
	return 0;
}
