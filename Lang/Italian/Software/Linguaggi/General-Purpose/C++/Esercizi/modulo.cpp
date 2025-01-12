#include <iostream>

using std::cout;
using std::cin;

int main() {
    int x, y, z;

    do {
        cout<<"Inserisci un numero x maggiore di 50: ";
        cin>>x;
    } while(x <= 50);

    z = x;

    do {
        cout<<"Inserisci un numero y compreso tra 1 e 10: ";
        cin>>y;
    } while(y < 1 || y > 10);

    cout<<"\n// Procedimento:\n\n";

    while(z >= y) {
        z -= y;
        cout<<z<<'\n';
    }

    cout<<"\nusando l'operatore aritmetico, x%y vale: "<<x%y<<'\n';
    cout<<"...e anche il programma trova il risultato: "<<z;
}