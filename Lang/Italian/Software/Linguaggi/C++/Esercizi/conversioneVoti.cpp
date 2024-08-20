#include <iostream>

using std::cout;
using std::cin;

int main() {
    char voto;

    cout<<"Voto :";
    cin>>voto;

    switch(voto) {
        case 'A':
            cout<<"A è 10\n";
            break;
        case 'B':
            cout<<"B è 9-8\n";
            break;
        case 'C':
            cout<<"C è 7-6\n";
            break;
        case 'D':
            cout<<"D è 5-4\n";
            break;
        case 'F':
            cout<<"F è 3-0\n";
            break;
        default:
            cout<<"Inserisci A, B, C, D o F\n";
    }

    return 0;
}
