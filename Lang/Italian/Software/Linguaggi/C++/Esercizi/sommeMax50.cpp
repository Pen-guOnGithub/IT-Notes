#include <iostream>

using std::cout;
using std::cin;

int main() {
    int num1;
    int num2;
    int sum = 0;
    
    while(sum < 50) {
        cout<<"Inserisci #1: ";
        cin>>num1;
    
        cout<<"Inserisci #2: ";
        cin>>num2;
        
        sum = sum + num1 + num2;
    }
}