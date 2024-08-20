#include <iostream>

using std::cout;
using std::cin;

int main() {
    int base;
    int esp;
    int potenza = 1;
    
    cout<<"Inserisci #1: ";
    cin>>base;
    
    cout<<"Inserisci #2: ";
    cin>>esp;
    
    for(int i = 0; i < esp; i++) {
        potenza = potenza * base;
    }
    
    cout<<potenza;
}