#include <iostream>

using std::cout;

int main() {
    int arr[5] = {2, 3, 5, 6, 9};

    cout<<"Ordine Inverso: ";
    for(int i = 5; i > 0; i--) {
        if(i != 1) {
            cout<<arr[i-1]<<", ";
        } else {
            cout<<arr[i-1];
        }
    }
    cout<<"\nValori Dispari: ";
    for(int i = 0; i < 5; i++) {
        if((arr[i] % 2) != 0) {
            cout<<arr[i];
            if(i != 4) cout<<", ";
        }
    }
    cout<<"\nIndice Dispari: ";
    for(int i = 0; i < 5; i++) {
        if((i % 2) != 0) {
            cout<<arr[i];
            if(i < 3) cout<<", ";
        }
    }
}