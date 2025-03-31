#include <iostream>

using std::cout;
using std::cin;

int max(int x, int y);

int main() {
    int mn, n1, n2, n3; // Maximum Number
    
    cout<<"Insert 3 Integers:\n";
    cout<<"n1: "; cin>>n1;
    cout<<"n2: "; cin>>n2;
    cout<<"n3: "; cin>>n3;

    mn = max(n1, n2);
    mn = max(mn, n3);

    cout<<"Biggest Number: "<<mn;
}

int max(int x, int y) {
    if (x >= y)
        return x;
    else
        return y;
}