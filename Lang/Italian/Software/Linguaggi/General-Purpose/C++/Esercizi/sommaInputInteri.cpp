/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
Calcolare la somma di tutti i numeri interi tra a e b dati in input
*/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main()
{
    int k, num = 2, sum = 0;
    
    do {
        cout<<"k: ";
        cin>>k;
    } while(k <= 0);
    
    while(k > 0) {
        k--;
        sum = sum + pow(num, 3);
        num = num + 2;
    }
    
    cout<<"Somma dei cubi: "<<sum;

    return 0;
}