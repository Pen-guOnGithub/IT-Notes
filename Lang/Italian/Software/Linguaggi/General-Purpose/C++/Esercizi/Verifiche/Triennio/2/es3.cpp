#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() {
	string str;
	int l, j = 0; // length
	bool canPass = false, hasNum = false, hasCaps = false;
	
	do {
		cout<<"String: ";
		getline(cin, str);
		l = str.length();
	} while(l >= 15);
	
	cout<<"Char Size: "<<l<<" chars";
	
	for(int i = 0; i < l; i++) {
		if(str.at(i) >= 'A' && str.at(i) <= 'Z') hasCaps = true;
		if(str.at(i) >= '0' && str.at(i) <= '9') hasNum = true;
	}
	if(l >= 8 && hasNum == true && hasCaps == true) canPass = true;
	canPass == true ? cout<<"\nPotrebbe essere una Password" : cout<<"\nNON Potrebbe essere una Password";
	
	string str2;
	for(int i = 0; i < l; i++) {
		i < l-1 ? str2 = str2+str[i]+"-" : str2 = str2+str[i];
	}
	cout<<'\n'<<str2<<'\n';
	for(int i = 0; i < l*2; i++) {
		if(i %2 != 0) str[i] = toupper(str[i]);
	}
	cout<<str;
}              