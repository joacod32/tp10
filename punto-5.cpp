#include <iostream>
#include <string>
using namespace std;
int main(){
	int valor;
	string moneda;
	int dolarcompra;
	int dolarventa;
	int eurocompra;
	int euroventa;
	int realcompra;
	int realventa;
	int eleccion;
	
	
	
	cout << "************" << endl;
    cout << "*                                *" << endl;
    cout << "*         BANCO VIRTUAL          *" << endl;
    cout << "*                                *" << endl;
    cout << "************" << endl;
    
    
    cout<<"ingresa el valor a convertir"<<endl;
    cin>>valor;
    cout<<"a que moneda quieres cambiarlo"<<endl;
    cin>>moneda;
    
    cout<<"que quieres hacer con esa moneda?"<<endl;
    cout<<" compra->1   venta->2"<<endl;
    cin>>eleccion;
    
    	dolarcompra= valor * 955,5000;
	eurocompra= valor * 1059;
	realcompra= valor * 18050;
	dolarventa= valor * 955,5000;
	euroventa= valor * 1119;
	realventa=valor * 19050;
	
    switch(eleccion){
	
    case 1:
    	if(moneda == "dolar"){
    		cout<<"la compra de esa cantidad de billetes va a tener un costo de "<<dolarcompra;
		}
		else if(moneda == "euro"){
			cout<<"la compra de esa cantidad de billetes va a tener un costo de "<<eurocompra;
		}
		if(moneda == "real"){
    		cout<<"la compra de esa cantidad de billetes va a tener un costo de "<<realcompra;
		}
		break;
		case 2:
			if(moneda == "dolar"){
    		cout<<"la venta de esa cantidad de billetes va a dar un ingreso de "<<dolarcompra;
		}
		else if(moneda == "euro"){
			cout<<"la venta de esa cantidad de billetes va a dar un ingreso de "<<eurocompra;
		}
		if(moneda == "real"){
    		cout<<"la venta de esa cantidad de billetes va a dar un ingreso de "<<realcompra;
		}
			break;
}
}
