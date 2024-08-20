#include <iostream>

using std::cout;
using std::cin;

int main() {
    int num1;
    int num2;
    int q = 0;
    
    cout<<"Inserisci #1: ";
    cin>>num1;
    do {
        cout<<"Inserisci #2: ";
        cin>>num2;
        if(num1 < num2) {
            cout<<"Riprova\n";
        }
    } while(num1 < num2);
    
    while(num1 >= num2) {
        q++;
        num1 = num1 - num2;
    }
    
    cout<<q;
}