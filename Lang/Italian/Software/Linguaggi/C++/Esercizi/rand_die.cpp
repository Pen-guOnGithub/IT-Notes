#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); // Se dimentichi srand da sempre stesso numero, usa il tempo quindi pseudocasuale
    
    // %6 = 0-5
    // %6+1 = 1-6
    int x = rand()%6+1;
    cout<<x;
}