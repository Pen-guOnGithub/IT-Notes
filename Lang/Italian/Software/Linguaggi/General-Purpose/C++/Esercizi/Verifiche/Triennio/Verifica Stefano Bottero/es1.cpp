// Stefano Bottero, 3A, Esercizio 1
#include <iostream>

using std::cout;
using std::cin;

int main() {
	int n, p = 0, sd = 0, nd = 0; // n = dimensione, sd = somma dispari
	
	cout<<"Dimensione Vettore: ";
	cin>>n;
	
	int v1[n];
	
	for(int i = 0; i < n; i++) {
		cout<<"v1["<<i<<"] : ";
		cin>>v1[i];
	}
	
	cout<<"\nv1["<<n<<"] = {";
	for(int i = 0; i < n; i++) {
		cout<<v1[i];
		if(i != n-1) cout<<", ";
	}
	cout<<"}\n";
	
	// Output Pari e Media Numeri Dispari
	for(int i = 0; i < n; i++) {
		if(v1[i]%2 != 0) {
			sd += v1[i];
			nd++;	
		} else {
			p++;
		}
	}
	if(p > 1) {
		cout<<"Ci sono "<<p<<" numeri Pari";
	} else if(p == 1) {
		cout<<"Ce un numero Pari";
	} else {
		// p < 1
		cout<<"Non ci sono numeri Pari";
	}
	cout<<"\nMedia Dispari: "<<sd/nd<<'\n';
	
	// v2 solo v1 < 10, v3 solo >= 10 (else)
	int v2[n], v3[n];
	for(int i = 0; i < n; i++) {
		if(v1[i] < 10) {
			v2[i] = v1[i];
			v3[i] = 0;
		} else {
			v3[i] = v1[i];
			v2[i] = 0;
		}
	}
	
	cout<<"\nv2 : ";
	for(int i = 0; i < sizeof(v2)/sizeof(v2[0]); i++) {
		cout<<v2[i]<<" ";
	}
	cout<<"\nv3 : ";
	for(int i = 0; i < sizeof(v3)/sizeof(v3[0]); i++) {
		cout<<v3[i]<<" ";
	}
	cout<<'\n';
	
	// Multipli v2 in v3
	// For v2
	for(int i = 0; i < sizeof(v2)/sizeof(v2[0]); i++) {
		if(v2[i] != 0) {
			cout<<'\n'<<v2[i]<<", Multipli : ";	
		}
		// For v3
		for(int j = 0; j < sizeof(v3)/sizeof(v3[0]); j++) {
			if(v2[i] != 0 && v3[j]%v2[i] == 0) {
				cout<<v3[j]<<" ";
			}
		}
	}
}