#include <iostream>
#include <ctime>
#include <stdlib.h>

using std::cout;

int main() {
    int num, ct = 0, nv[91], ctv[91]; // (Randomized)Number, Counter(Number), NumberVector, CounterVector
    srand(time(NULL));

    for(int i = 0; i < 91; i++) {
        nv[i] = i;
        ctv[i] = 0;
    }
    for(int i = 0; i <= 300; i++) {
        num = rand()%91;
        ctv[num]++;
    }
    cout<<"Num\t"<<"Volte\n";
    for(int i = 0; i < 91; i++) {
        cout<<nv[i]<<'\t'<<ctv[i]<<'\n';
    }
    // Visualizzo i Numeri Ritardatari
    cout<<"Numeri Ritardati : ";
    for(int i = 0; i < 91; i++) {
        if(ctv[i] == 0) {
            cout<<nv[i]<<" ";
        }
    }
    // Continuo ad Estrarre fino a fine Anno
    for(int i = 0; i < 480; i++) {
        num = rand()%91;
        ctv[num]++;
    }
    cout<<"\nNumeri Super-Ritardati : ";
    for(int i = 0; i < 91; i++) {
        if(ctv[i] == 0) {
            ct++;
            cout<<nv[i]<<" ";
        }
    }
    if(ct > 0) {
        for(int i = 0; i < 91; i++) {
            if(ctv[i] == 0) {
                cout<<nv[i]<<" ";
            }
        }
    } else {
        cout<<"//";
    }
}