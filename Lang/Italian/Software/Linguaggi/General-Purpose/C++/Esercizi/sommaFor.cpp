#include <iostream>

using std::cout;
using std::cin;

int main() {
    int num1;
    int num2;
    int somma = 0;
    
    cout<<"Inserisci #1: ";
    cin>>num1;
    
    cout<<"Inserisci #2: ";
    cin>>num2;
    
    for(int i = 0; i < num2; i++) {
        somma = somma + num1;
    }
    
    cout<<somma;
}