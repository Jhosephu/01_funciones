#include<bits/stdc++.h>

using namespace std;

int sumArr (int x[], int n);

int main(){
	int x[5], s, i;
	cout<<"ingrese todos los numeros a sumar: ";
	for(i=0; i<5; i++){
		cin>>x[i];
	}
	s=sumArr(x,i);
	cout<<"la suma de todos los elementos es: "<<s;
	return 0;
}

int sumArr(int x[],int n){
	if(n==0){
		return x[0];
	}
	else{
		return x[n]+sumArr(x, n-1);
	}
}
