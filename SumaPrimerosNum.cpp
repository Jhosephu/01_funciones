#include<bits/stdc++.h>

using namespace std;

int sum(int);

int main(){
	int n, s;
	cout<<"ingrese un numero: ";
	cin>>n;
	s=sum(n);
	cout<<"la suma de los primeros numeros hasta "<<n<<"es: "<<s;
	return 0;
}

int sum(int n){
	if(n==1){
		return 1;
	}
	else{
		return n+sum(n-1);
	}
}