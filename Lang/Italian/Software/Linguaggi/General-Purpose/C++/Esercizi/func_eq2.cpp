#include <iostream>
#include <fstream>
#include <cmath>

using std::cout;
using std::cin;
using std::ofstream; // Put the answers in a file

int mostraMenu();
float input();
float calcolaDelta(float a, float b, float c);
void calcoloSoluzioni(float delta, float a, float b);

int main() {
    // Func --> return, Procedure --> void
    int scelta = 0;
    float a = 0, b = 0, c = 0, delta=0;
    bool ranInput = false, ranDelta = false;

    do {
        scelta = mostraMenu();
        switch(scelta) {
            case 1:
                a = input();
                b = input();
                c = input();
                ranInput = true;
                break;
            case 2:
                delta=calcolaDelta(a, b,c );
                ranDelta = true;
                break;
            case 3:
                if(ranInput == true && ranDelta == true) calcoloSoluzioni(delta, a, b);
                else cout<<"Inserisci prima i coeff e calcola il delta\n";
                break;
            case 4:
                ranInput = false;
                ranDelta = false;
                break;
            case 5:break;
            default:
                cout<<"";
        }

    } while(scelta!=5);
}

int mostraMenu() {
    int x;

    cout<<"**************************************************\n";
    cout<<"*        RISOLUZIONE EQ DI SECONDO GRADO         *\n";
    cout<<"**************************************************\n";
    cout<<"*        1 ACQUISIZIONE DEI COEFFICIENTI         *\n";
    cout<<"*        2 CALCOLO DEL DETERMINANTE              *\n";
    cout<<"*        3 CALCOLO DELLE SOLUZIONI               *\n";
    cout<<"*        4 NUOVA EQUAZIONE                       *\n";
    cout<<"*        5 USCITA                                *\n";
    cout<<"**************************************************\n";

    cin>>x;
    return x;
}

float input() {
    float coeff;
    cout<<"Inserisci il coeff: ";
    cin>>coeff;
    return coeff;
    // Qui non viene calcolato nulla
}

float calcolaDelta(float a, float b, float c) {
    return pow(b,2)-4*a*c;
}

void calcoloSoluzioni(float delta, float a, float b) {
    float x1 = 0, x2 = 0;

    if(delta < 0) {
        cout<<"Non esistono soluzioni reali\n";
    } else {
        if(delta == 0) {
            x1 = -b/(2*a);
            cout<<"Due soluzioni coincidenti pari a "<<x1<<'\n';
        } else {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout<<"Due soluzioni pari a "<<x1<<" e "<<x2<<'\n';
        }
    }
}