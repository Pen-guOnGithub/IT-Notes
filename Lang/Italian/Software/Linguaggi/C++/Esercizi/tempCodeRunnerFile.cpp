#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::string;

string name;

string skibidize(string name);

int main() {
    cout<<"Name: ";
    cin>>name;
    cout<<skibidize(name)<<'\n';
}

string skibidize(string name) {
    return "Skibidi "+name;
}