#include <iostream>

using std::cout;
using std::cin;

int main() {
    int num;
    
    cout<<"Inserisci un numero: ";
    cin>>num;
    
    for(int i = num; i <= num * 10; i += num) {
        cout<<i<<std::endl;
    }
}