/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

// using namespace std; <-- Bad practice, check by using std::
using std::cout;
using std::cin;

// Equazione Grado 1

int main()
{
    int x;
    cout<<"Inserisci x: ";
    cin>>x;
    
    /*
    if((x%2) == 0) {
        cout<<x<<" è Pari";
    } else {
        cout<<x<<" è Dispari";
    }
    */

    x%2==0 ? cout<<x<<" è Pari" : cout<<x<<" è Dispari";

    return 0;
}
