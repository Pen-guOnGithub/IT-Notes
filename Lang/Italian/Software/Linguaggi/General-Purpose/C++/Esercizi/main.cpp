#include <iostream>

using std::cout;
using std::cin;

int main() {
    int num;
    int sum = 0;
    
    cout<<"Inserisci un numero: ";
    cin>>num;
    
    int max = num;
    int min = num;

    while(num != -1) {
        sum = sum + num;
        if(num > max) {
            max = num;
        }
        if(num < min) {
            min = num;
        }
        cout<<"Inserisci un numero: ";
        cin>>num;
    }

    cout<<"Somma: "<<sum<<'\n';
    cout<<"Max: "<<max<<'\n';
    cout<<"Min: "<<min<<'\n';
}