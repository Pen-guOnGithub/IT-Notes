/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

// using namespace std;

using std::cout;
using std::cin;

// Tariffa età

int main()
{
    int age;
    cout<<"Inserire età: ";
    cin>>age;

    /*
    if(age<10 || age>60) {
        cout<<"5 euro";
    } else {
        cout<<"12 euro";
    }
    */

   age<10 || age>60 ? cout<<"5 euro" : cout<<"12 euro";

   return 0;
}