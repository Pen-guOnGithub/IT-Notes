/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
Es. 2:
Fino a che non viene inserito il carattere '*', input carattere e dire se carattere in ASCII pari o dispari
*/

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    char ch;
    
    cout<<"Inserisci un char: ";
    cin>>ch;
    
    while(ch != '*') {
        if((int) ch %2 == 0) {
            cout<<(int)ch<<" è Pari\n";
        } else {
            cout<<(int)ch<<" è Dispari\n";
        }
        
        cout<<"Inserisci un char: ";
        cin>>ch;
    }
    
    return 0;
}