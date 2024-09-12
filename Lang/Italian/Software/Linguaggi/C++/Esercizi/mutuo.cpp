#include <iostream>

using std::cout;
using std::cin;

void mutuo1();
void mutuo2();
void mutuo3();

// Change functions to run different way to solve this exercise.
int main() {
    mutuo3();
}

// Func 1
void mutuo1() {
    int yrs = 0;
    int cap = 100000;
    int intrs = 4000;

    while(cap > 0) {
        cap = cap - intrs - 8000;
        intrs = cap * 0.04;
        /* Testing Purposes Only
        cout<<cap<<'\n';
        */
        yrs++;
    }

    if(yrs == 1) { 
        cout<<"Per pagare il mutuo ci metteresti "<<yrs<<" anno.";
    } else {
        cout<<"Per pagare il mutuo ci metteresti "<<yrs<<" anni.";
    }
}

// Func 2
void mutuo2() {

    int yrs = 0;
    int cap = 100000;
    int intrs;

    do {
        intrs = cap * 0.04;
        cap = cap - intrs - 8000;
        /* Testing Purposes Only
        cout<<cap<<'\n';
        */
        yrs++;
    } while(cap > 0);

    if(yrs == 1) { 
        cout<<"Per pagare il mutuo ci metteresti "<<yrs<<" anno.";
    } else {
        cout<<"Per pagare il mutuo ci metteresti "<<yrs<<" anni.";
    }
}

// Func 3 (Custom)
void mutuo3() {

    int yrs = 0;
    int cap;
    int intrs;
    
    cout<<"Mutuo: ";
    cin>>cap;

    while(cap > 0) {
        intrs = cap * 0.04;
        cap = cap - intrs - 8000;
        /* Testing Purposes Only
        cout<<cap<<'\n';
        */
        yrs++;
    }

    // Ternary, less efficient to read but personal preference
    yrs == 1 ? cout<<"Per pagare il mutuo ci metteresti "<<yrs<<" anno." : cout<<"Per pagare il mutuo ci metteresti "<<yrs<<" anni.";
}