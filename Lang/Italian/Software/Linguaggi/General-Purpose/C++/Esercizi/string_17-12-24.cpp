#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() {
	string str, str1 ("susward"), str2 = "patriqueer";
	int chars = 0;
	
	cout<<"Input a word: ";
	getline(cin, str); // gets the whole line and fills the string
	
	cout<<'\n'<<str<<"bob";
	cout<<"\nFirst Letter = "<<str[0];
	cout<<"\nInput Length = "<<str.length();
	for(int i = 0; i < str.length(); i++) {
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') chars++;
	}
	cout<<"\nNumber of Chars = "<<chars;
	string gday = "Buona Giornata";
	cout<<'\n'<<gday;
	gday.erase(4, 1); // erase from point 4, 1 to the right
	gday.replace(10, 10, "o");
	cout<<'\n'<<gday;
	
	string str3 (10, '-'); // new string made of 10 hyphens
	str += "bob";
	string str4 ("B trianglepants ep.01 ");
	cout<<"\n\n"<<str3<<' '<<(char)toupper(str[0])<<str<<str4<<str3;
	cout<<"\n\n"<<str1<<" trapped in his basement "<<str2<<"'s femboy";
	string str5 (str2, 0, 8); // new string copy(str, start_pos_to_copy, end_pos_to_copy)
	cout<<'\n'<<str<<" trapped in his basement "<<str5<<"'s daughter";
	
	str4.replace(19, 21, "02 ");
	cout<<"\n\n"<<str3<<' '<<(char)toupper(str[0])<<str<<str4<<str3;
	string str6 = "The Rizzler";
	cout<<"\n\n"<<str6<<" is today years old when he realised they didn't know";
	str6.erase(0, 4).erase(4, 3);
	cout<<"\nHis "<<str6<<" riddled "<<str<<"'s hot dog and made it mayonnaise";
}