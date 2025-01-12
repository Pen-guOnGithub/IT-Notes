#include <iostream>
#include <stdlib.h>
#include <ctime>

using std::cout;

int main() {
    int n1[8], n2[8], n3[9];
    srand(time(NULL));

    for(int i = 0; i < 8; i++) {
        n1[i] = rand()%2;
        n2[i] = rand()%2;
    }
    cout<<"  n1: ";
    for(int i = 0; i < 8; i++) {
        cout<<n1[i]<<" ";
    }
    cout<<"\n  n2: ";
    for(int i = 0; i < 8; i++) {
        cout<<n2[i]<<" ";
    }

    int c = 0, sum = 0; // c = carry
    for(int i = 7; i >= 0; i--) {
        sum = n1[i] + n2[i] + c;
        n3[i+1] = sum % 2; // 0-1 = 0, 2-3 = 1
        c = sum / 2; // 0/2 = 0, 2/2 = 1
    }
    n3[0] = c;
    cout<<"\nn3: ";
    for(int i = 0; i < 9; i++) {
        cout<<n3[i]<<" ";
    }
}