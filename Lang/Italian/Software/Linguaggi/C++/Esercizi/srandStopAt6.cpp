#include <iostream>

// Dadi, vince il primo che fa 6

int main() {
    srand(time(NULL));
    
    int p1 = rand()%6+1;
    std::cout<<p1<<'\n';
    int p2;
    if(p1 != 6) {
        p2 = rand()%6+1;
        std::cout<<p2<<'\n';
    }
    
    while(p1 != 6 && p2 != 6) {
        p1 = rand()%6+1;
        std::cout<<p1<<'\n';
        if(p1 != 6) {
            p2 = rand()%6+1;
            std::cout<<p2<<'\n';
        }
    }
}