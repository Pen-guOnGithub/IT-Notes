#include <iostream>

// Dadi, finisce entrambi uguali (+ conta tentativi)

int main() {
    srand(time(NULL));
    
    int p1;
    int p2;
    int n = 0;
    
    do {
        p1 = rand()%6+1;
        p2 = rand()%6+1;
        std::cout<<p1<<std::endl;
        std::cout<<p2<<std::endl;
        n++;
    } while(p1!=p2);
    
    std::cout<<"Tentativi: "<<n;
}