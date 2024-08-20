#include <iostream>

using std::cout;
using std::cin;

int main() {
    int num;
    int pari = 2;
    
    cout<<"Inserisci un numero: ";
    cin>>num;
    
    // inizializzare i = indice di ciclo (indice da cui si parte)
    // condizione di terminazione
    // aumento
    for(int i = 0; i < num; i++) {
        // Check numero finale, solo in definiti
        /*
        if(i==num-1) {
            cout<<pari;
        } else {
            cout<<pari<<", ";
        }
        */
        // i==num-1 ? cout<<pari : cout<<pari<<", ";
        // Check numero iniziale, usare sempre
        i==0 ? cout<<pari : cout<<", "<<pari;
        pari += 2;
    }
}