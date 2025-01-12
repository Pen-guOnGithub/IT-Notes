/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
Es. 1
*/

#include <iostream>
#include <ctype.h>

using std::cout;
using std::cin;

int main()
{
    int lt, input, ts;
    float costo_lt, tot, sct;
    char ct;
    
    cout<<"Costo/litro: ";
    cin>>costo_lt;
    
    cout<<"Tot. litro: ";
    cin>>lt;
    
    do {
        cout<<"Inserire '1' per categoria e '2' per tessera: ";
        cin>>input;
        
        if(input != 1 && input != 2) {
            cout<<"Error";
        }
    } while(input != 1 && input != 2);
    
    tot = lt * costo_lt;
    
    if(input == 1) {
        do {
            cout<<"Inserisci A, B o C: ";
            cin>>ct;
            ct = toupper(ct);
        } while(ct != 'A' &&  ct != 'B' && ct != 'C');
        
        switch(ct) {
            case 'A':
                break;
            case 'B':
                sct = tot * 5/100;
                tot = tot - sct;
                break;
            case 'C':
                sct = tot * 8/100;
                tot = tot - sct;
                break;
        }
    } else {
        cout<<"Inserisci numero tessera: ";
        cin>>ts;
        
        if(ts <= 10000) {
            ;
        } else if(ts <= 19000) {
            sct = tot * 5/100;
            tot = tot - sct;
        } else {
            sct = tot * 8/100;
            tot = tot - sct;
        }
    }
    
    cout<<"Totale da pagare: "<<tot;
    
    return 0;
}