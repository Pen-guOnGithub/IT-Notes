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
    int num, ten = 1;
    char ch = '!';
    
    cout<<"Inserire punto d'arrivo: ";
    cin>>num;
    
    while((int)ch <= num) {
        if(ten%10 == 0) {
            cout<<ch<<std::endl;
        }
        else {
            (int)ch != num ? cout<<ch<<"," : cout<<ch;
        }
        ch++;
        ten++;
    }
    
    return 0;
}