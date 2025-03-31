#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::ifstream;

int main() {
	ifstream Input;
	
	char cf, ch; // char find, char
	int i=0, ct=0;
	
	cout<<"Scegli un carattere: ";
	cin>>cf;
	
	Input.open("func_ch_text.txt");
	if(Input.is_open()) {
		while(!Input.eof()) {
			Input>>ch;
			if(ch==cf) ct++;
		}
		ch > 0 ? cout<<"Nel testo ci sono "<<ct<<" '"<<cf<<"'" : cout<<"Nel testo NON ci sono '"<<cf<<"'";
		Input.close();
	}
	else {
		cout<<"Errore in apertura file\n";
	}
}