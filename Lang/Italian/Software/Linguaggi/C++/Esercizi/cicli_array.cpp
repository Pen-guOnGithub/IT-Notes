#include <iostream>

using std::cout;
using std::cin;

int main() {
	char arr1[7] = {'S','K','I','B','I','D','I'};
	
	for(int i = 0; i < 7; i++) {
		cout<<arr1[i];
		if(i == 6) cout<<" ";
	}
	
	char arr2[6] = {'T','O','I','L','E','T'};
	
	for(int i = 0; i < 6; i++) {
		cout<<arr2[i];
		if(i == 5) cout<<"\n\n";
	}
	
	int arr3[10];
	
	// The sizeof() func. gets the size of an array, but in BYTES
	// To convert it we divide it by the sizeof(arr[0])
	
	for(int i = 1; i <=
	sizeof(arr3) /
	sizeof(arr3[0]); i++) {
		arr3[i] = i;
		cout<<arr3[i];
		if(i != sizeof(arr3)/sizeof(arr3[0])) {
			cout<<", ";
		} else {
			cout<<"\n\n";
		}
	}
	
	int n;
	
	cout<<"Array Size: ";
	cin>>n;
	
	float c_arr[n];
	bool is100 = false; // Flags if 100 is present
	
	for(int i = 0; i < n; i++) {
		cout<<"Elemento ["<<i<<"]: ";
		cin>>c_arr[i];
	}
	cout<<"Array (Ordine Normale, Spazi): ";
	for(int i = 0; i < n; i++) {
		cout<<c_arr[i]<<" ";
		if(c_arr[i] == 100) {
			is100 = true;
		}
		if(i == n-1) {
			cout<<'\n';
		}
	}
	is100 == true ? cout<<"100 : SI\n" : cout<<"100 : NO\n";
	cout<<"Array (Ordine Inverso, Virgole): ";
	for(int i = n; i > 0; i--) {
		cout<<c_arr[i-1];
		i != 1 ? cout<<", " : cout<<"\n";
	}
	cout<<"Array (Ordine Normale, (Spazi), Black Friday -20%): ";
	for(int i = 0; i < n; i++) {
		// c_arr[i] -= c_arr[i] * 0.2; // 20 / 100 = 0.2
		// c_arr[i] = c_arr[i] * 0.8;
		c_arr[i] *= 0.8;
		cout<<"("<<c_arr[i]<<") ";
	}
	
	float arr4[n];
	
	cout<<"Array (Ordine Normale, Spazi, Copia di c_arr: ";
	for(int i = 0; i < n; i++) {
		arr4[i] = c_arr[i];
		cout<<"\narr4: "<<arr4[i]<<'\t'<<"c_arr: "<<c_arr[i];
	}
	
	// Compiti : es.10 && es.11, p.61
}