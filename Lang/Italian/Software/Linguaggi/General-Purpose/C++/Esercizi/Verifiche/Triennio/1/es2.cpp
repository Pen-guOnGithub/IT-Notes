// Stefano Bottero, 3A, Esercizio 2
#include <iostream>
#include <cctype>

using std::cout;
using std::cin;

int main() {
    char arr1[30], arr2[30], c;
    int n, s1 = 0, s2 = 0; // n = numero(parola), c = cambio, s(in)1, s(in)2
    bool ct = false; // ct = cambio true (vuoi cambiare)
    
    do {
    	n = 1;
    	cout<<"Parola #"<<n<<": ";
    	cin>>arr1;
    	n++;
    	cout<<"Parola #"<<n<<": ";
    	cin>>arr2;
    	
    	if(strlen(arr1) == strlen(arr2)) cout<<"Stessa dimensione\n";
    	
    	cout<<"\nVuoi cambiare le parole (s/n)? ";
    	cin>>c;
    	c == 's' ? ct = true : ct = false;
	} while(ct == true);
	
	for(int i = 0; i < 30; i++) {
		if(arr1[i] == 's') s1++;
		if(arr2[i] == 's') s2++;
	}
	if(s1 > s2) {
		cout<<'\n'<<arr1<<" ha piu 's' di "<<arr2;
	} else if(s1 == s2) {
		cout<<'\n'<<arr1<<" ha lo stesso numero di 's' di "<<arr2;
	} else {
		cout<<'\n'<<arr1<<" ha meno 's' di "<<arr2;
	}
	
	for(int i = 0; i < 30; i++) {
		if(i == 0 || i == strlen(arr1)-1) {
			arr1[i] = toupper(arr1[i]);
		}
		if(i == 0 || i == strlen(arr2)-1) {
			arr2[i] = toupper(arr2[i]);
		}
	}
	cout<<"\n\n"<<arr1<<", "<<arr2;
	
	cout<<"\nInizio Comune: ";
	for(int i = 0; i < 30; i++) {
		if(arr1[i] != '\0' && arr2[i] != '\0' && arr1[i] == arr2[i]) cout<<arr1[i];
		if(arr1[i] != arr2[i]) break;
	}
	
	// Array 3 : Vocali Array 1 alternato Consonanti Array 2
	char arr3[30];
	for(int i = 0; i < 30; i++) {
		// Vocale
		if(arr1[i] == 'a' || arr1[i] == 'e' || arr1[i] == 'i' || arr1[i] == 'o' || arr1[i] == 'u') {
			arr3[i] = tolower(arr1[i]);
		}
		// Consonante
		if(arr2[i] != 'a' && arr2[i] != 'e' && arr2[i] != 'i' && arr2[i] != 'o' && arr2[i] != 'u') {
			arr3[i+1] = tolower(arr2[i]);
		}
	}
	cout<<"\narr3: "<<arr3;
}