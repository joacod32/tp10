#include <iostream>
using namespace std;
int main(){
	int num1;
	int num2;
	int num3;
	
	cout<<"ingresa el primer numero:"<<endl;
	cin>>num1;
		cout<<"ingresa el segundo numero:"<<endl;
	cin>>num2;
		cout<<"ingresa el tercer numero:"<<endl;
	cin>>num3;
	
	if(num1 > num2&&num1  > num3){
		cout<<"el numero mas grande es el "<<num1<<endl;
	}
	 else if (num2 > num1&&num2 > num3){
		cout<<"el numero mas grande es el "<<num2<<endl;
	}
	 else
		cout<<"el numero mas grande es el "<<num3<<endl;
	}
