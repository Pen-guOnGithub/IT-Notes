#include <iostream>

using std::cout;
using std::cin;

int main() {
    int num1, num2;
    char ch;

    cout<<"Numero #1: ";
    cin>>num1;

    cout<<"Numero #2: ";
    cin>>num2;

    cout<<"Lettera (U/C/O): ";
    cin>>ch;
    ch = toupper(ch);

    switch(ch) {
        case 'U':
            num1 == num2 ? cout<<"i due numeri inseriti sono uguali" : cout<<"sono diversi";
            break;
        case 'C':
            ((num1 >= 0 && num2 >= 0) || (num1 <= 0 && num2 <= 0)) ? cout<<" i due numeri sono concordi" : cout<<"i due numeri sono discordi";
            break;
        case 'O':
            if(abs(num1) == abs(num2)) {
                if((num1 > 0 && num2 < 0) || (num1 < 0 && num2 > 0)) {
                    cout<<" i due numeri sono opposti";
                } else {
                    cout<<"i due numeri non sono opposti";
                }
            }
            break;
        default:
            cout<<"Riprova";
    }

    return 0;
}