#include<bits/stdc++.h>

using namespace std;

int fact(int);

int main(){
	int n, fct;
	cout<<"ingrese un numero: ";
	cin>>n;
	fct=fact(n);
	cout<<"el factorial del numero es: "<<fct;
	return 0;
}

int fact(int n){
	int fct;
	if(n==0){
		return 1;
	}
	else{
		fct=n*fact(n-1);
		return fct;
	}
}