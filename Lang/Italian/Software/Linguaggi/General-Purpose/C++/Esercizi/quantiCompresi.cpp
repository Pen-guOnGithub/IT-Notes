/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
Stampare (a video) tutti i numeri pari compresi tra a e b dati in input e dire quanti sono
*/

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int num1, num2, min, max, qt = 0;
    
    cout<<"#1: ";
    cin>>num1;
    
    cout<<"#2: ";
    cin>>num2;
    
    if(num1 > num2) {
        min = num2;
        max = num1;
    } else {
        min = num1;
        max = num2;
    }
    
    while(max > min+1) {
        min++;
        if(min%2==0) {
            qt++;
            cout<<min<<'\n';
        }
    }
    
    cout<<"Quantità: "<<qt;

    return 0;
}