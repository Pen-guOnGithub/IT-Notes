#include <iostream>

using std::cout;
using std::cin;

int main() {
    int num;
    int n;
    int pari = 0;
    
    cout<<"Inserisci quanti numeri: ";
    cin>>n;
    
    int i = 0;
    
    while(i < n) {
        cout<<"Inserisci un numero: ";
        cin>>num;
        if(num % 2 == 0) {
            pari++;
        }
        i++;
    }
    
    pari == n ? cout<<"Sono tutti pari" : cout<<"Non sono tutti pari";
}