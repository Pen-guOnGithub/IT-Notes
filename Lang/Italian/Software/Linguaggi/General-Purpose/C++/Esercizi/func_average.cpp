#include <iostream>

using std::cout;
using std::cin;

float average(int n1, int n2, int n3);

int main() {
    int n1, n2, n3;
    float av;

    cout<<"Insert 3 Integers:\n";
    cout<<"n1: "; cin>>n1;
    cout<<"n2: "; cin>>n2;
    cout<<"n3: "; cin>>n3;

    av = average(n1, n2, n3);
    cout<<"\nTheir Average: "<<av;
}

float average(int n1, int n2, int n3) {
    return (n1 + n2 + n3)/3;
}