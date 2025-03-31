#include <iostream>

using std::cout;
using std::cin;

float prmtr(bool is2, int s1, int s2);
float area(bool is2, int s1, int s2);

int main() {
    int s1, s2;
    float pm, ar; // Perimeter, Area
    bool isSqr;

    cout<<"Write 2 Sides: ";
    cout<<"\ns1: "; cin>>s1;
    cout<<"s2: "; cin>>s2;

    if(s1 == s2) isSqr = true; else isSqr = false;
    
    pm = prmtr(isSqr, s1, s2);
    ar = area(isSqr, s1, s2);

    isSqr ? cout<<"Square, " : cout<<"Rectangle, ";
    cout<<"Prmtr: "<<pm<<", Area: "<<ar<<'\n';
}

float prmtr(bool is2, int s1, int s2) {
    if(is2) return (s1 * 4);
    else return ((s1 * 2) + (s2 * 2));
}

float area(bool is2, int s1, int s2) {
    if(is2)
        return (s1 * s1);
    else
        return (s1 * s2);
}