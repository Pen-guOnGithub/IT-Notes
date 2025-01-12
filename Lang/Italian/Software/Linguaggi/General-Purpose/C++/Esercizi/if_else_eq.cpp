#include <iostream>

using namespace std;

// Equazione Grado 1

int main()
{
    float a, b, x;
    
    cout<<"Inserisci a: ";
    cin>>a;
    
    cout<<"Inserisci b: ";
    cin>>b;
    
    if(a == 0) {
        if(b == 0) {
            cout<<"Indeterminata\n";
        } else {
            cout<<"Impossibile\n";
        }
    } else {
        x = -(b/a);
        if(x == 0) {
            cout<<"0\n";
        } else {
           cout<<x<<'\n'; 
        }
    }

    return 0;
}