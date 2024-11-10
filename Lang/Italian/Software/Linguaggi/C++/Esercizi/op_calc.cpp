#include <iostream>

using std::cout;
using std::cin;

char op;
double num1;
double num2;
double ans;

int main() {
    cout<<"********** CALCOLATRICE **********\n";

    cout<<"Inserisci uno di questi operatori (+ - * /): ";
    cin>>op;

    cout<<"Inserisci #1: ";
    cin>>num1;

    cout<<"Inserisci #2: ";
    cin>>num2;

    switch(op){
        case '+':
            ans = num1 + num2;
            cout<<"Risultato: "<<ans<<'\n';
            break;
        case '-':
            ans = num1 - num2;
            cout<<"Risultato: "<<ans<<'\n';
            break;
        case '*':
            ans = num1 * num2;
            cout<<"Risultato: "<<ans<<'\n';
            break;
        case '/':
            ans = num1 / num2;
            cout<<"Risultato: "<<ans<<'\n';
            break;
        default:
            cout<<"Inserisci un operatore valido\n";
            break;
    }

    cout<<"**********************************\n";

    return 0;
}