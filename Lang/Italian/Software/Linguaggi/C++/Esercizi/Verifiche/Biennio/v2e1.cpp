#include <iostream>

using std::cout;
using std::cin;

int main() {
    int shops;
    bool risp = true;
    float gain;
    float sum = 0;
    float maxGain = 0;
    int pos;
    char ch;

    do {
        cout<<"Numero negozi: ";
        cin>>shops;
        if(shops <= 0) {
            cout<<"Riprova con più negozi\n";
        }
    } while(shops <= 0);

    while(risp) {
        for(int i = 1; i <= shops; i++) {
            cout<<"Inserisci l'incasso del negozio "<<i<<": ";
            cin>>gain;
            sum = sum + gain;
            if(gain > maxGain) {
                maxGain = gain;
                pos = i;
            }
        }

        cout<<"GRAFICO VENDITE DELLA GIORNATA:\n";
        cout<<"(* = 100 euro)\n";
        cout<<"Vendita massima (negozio "<<pos<<"): ";
        for(int i = 1; i <= (maxGain / 100); i++) {
            cout<<"*";
        }
        cout<<"\nVendita media: "<<(sum / shops)<<", ";
        for(int i = 1; i <= (sum / shops)/100; i++) {
            cout<<"*";
        }
        cout<<'\n';

        cout<<"Vuoi inserire un'altra giornata (s/n)? ";
        cin>>ch;
        ch = tolower(ch);
        if(ch == 'n') { risp = false; }
    }
}