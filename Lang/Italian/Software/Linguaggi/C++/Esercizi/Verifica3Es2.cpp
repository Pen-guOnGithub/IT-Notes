#include <iostream>

using std::cout;
using std::cin;

int main() {
    double s1, s2, s3;
    char ch;

    cout<<"Lato 1: ";
    cin>>s1;
    cout<<"Lato 2: ";
    cin>>s2;
    cout<<"Lato 3: ";
    cin>>s3;

    cout<<"Lettera (p/c/r)";
    cin>>ch;
    ch = tolower(ch);

    switch(ch) {
        case 'p':
            cout<<"Perimetro: "<<s1+s2+s3;
            break;
        case 'c':
            if(s1 == s2 && s2 == s3) {
                cout<<"Equilatero";
            } else if(s1 == s2 || s2 == s3 || s1 == s3) {
                cout<<"Isoscele";
            } else {
                cout<<"Scaleno";
            }
            break;
        case 'r':
            if(s1*s1 + s2*s2 == s3*s3 || s1*s1 + s3*s3 == s2*s2 || s2*s2 + s3*s3 == s1*s1) {
                cout<<"Rettangolo";
            } else {
                cout<<"Non Rettangolo";
            }
            break;
    }
}