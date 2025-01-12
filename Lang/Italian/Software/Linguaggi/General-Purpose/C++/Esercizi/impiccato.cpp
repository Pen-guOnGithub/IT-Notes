#include <iostream>
#include <cstring>

using std::cout;
using std::cin;

int main() 
{
	char p[9], pc[9], ch, pi[9]; // parola, parola censurata, parola indovinata
	
	do {
		cout<<"Parola: ";
		cin>>p;
	} while(strlen(p) != 8);
	system("CLS");
	
	for(int i = 0; i < 8; i++) {
		pc[i] = '_';
	}
	
	for(int i = 0; i < 4; i++) {
		cout<<"Che lettera vuoi far apparire?\n";
		cin>>ch;
		for(int j = 0; j < 8; j++) {
			if(p[j] == ch) pc[j] = ch;
			cout<<pc[j];
		}
		cout<<'\n';
	}
	
	cout<<"\nOra devi indovinare: ";
	cin>>pi;
	
	strcmp(pi, p) == 0 ? cout<<"Bravo! Hai indovinato!" : cout<<"Non hai indovinato ):";
}