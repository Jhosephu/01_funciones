#include<bits/stdc++.h>

using namespace std;

int comb(int, int);

int main(){
	int n, k, cmb;
	cout<<"ingrese el primer numero: "; 
	cin>>n;
	cout<<"ingrese el segundo numero: ";
	cin>>k;
	cmb=comb(n,k);
	cout<<"la combinatoria entre ambos numeros es: "<<cmb;
	return 0;
}

int comb(int n,int k){
	if(n==k){
		return 1;
	}
	else{
		if(k==1){
			return n;
		}
		else{
			return comb(n-1,k-1)+comb(n-1,k);
		}
	}
}