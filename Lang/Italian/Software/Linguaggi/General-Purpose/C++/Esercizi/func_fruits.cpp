#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

void apples(int n);
string pears(int n, string str);

int main() {
	int num;
	string str;
	do {
		cout<<"Pick any positive number: ";
		cin>>num;
	} while(num < 0);
	apples(num);
	cout<<pears(num, str);
}

void apples(int n) {
	cout<<"There are "<<n<<" apples\n";
}

string pears(int n, string str) {
	str = str+"There are "+char('0'+n)+" pears";
	return str;
}