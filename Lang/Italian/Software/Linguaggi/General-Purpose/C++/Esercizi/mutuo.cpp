#include <iostream>

using std::cout;
using std::cin;

void mutuo1();
void mutuo2();
void mutuo3();
void mutuo4();

// Change functions to run different way to solve this exercise.
int main() {
    mutuo4();
}

// Func 1
void mutuo1() {
    int yrs = 0;
    int cap = 100000;
    int intrs = 4000;

    while(cap > 0) {
        // Subract the only the part you're paying that isn't going to interest
        cap = cap - (8000 - intrs);
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
        cap = cap - (8000 - intrs);
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
        cap = cap - (8000 - intrs);
        /* Testing Purposes Only
        cout<<cap<<'\n';
        */
        yrs++;
    }

    // Ternary, less efficient to read but personal preference
    yrs == 1 ? cout<<"Per pagare il mutuo ci metteresti "<<yrs<<" anno." : cout<<"Per pagare il mutuo ci metteresti "<<yrs<<" anni.";
}

// Func 4 (Custom, Quarterly --> i.e. Paid every quarter of a year)
void mutuo4() {

    int qrtr = 0;
    int cap;
    int intrs;
    
    cout<<"Mutuo: ";
    cin>>cap;

    while(cap > 0) {
        intrs = cap * 0.01;
        cap = cap - (2000 - intrs);
        /* Testing Purposes Only
        cout<<cap<<'\n';
        */
        qrtr++;
    }

    // Ternary, less efficient to read but personal preference
    qrtr == 1 ? cout<<"Per pagare il mutuo ci metteresti "<<qrtr<<" anno." : cout<<"Per pagare il mutuo ci metteresti "<<qrtr<<" anni.";
}