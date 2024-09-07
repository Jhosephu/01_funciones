#include <bits/stdc++.h>

using namespace std;

int mult(int, int);

int main(){
	int n, m, prod;
	cout<<"ingrese el primer numero: ";
	cin>>n;
	cout<<"ingrese el segundo numero: ";
	cin>>m;
	prod=mult(n,m);
	cout<<"el producto de ambos numeros es: "<<prod;
	return 0;
}

int mult(int a, int b){
	if(b==0){
		return 0;
	}
	else{
		return a+mult(a, b-1);
	}
}
