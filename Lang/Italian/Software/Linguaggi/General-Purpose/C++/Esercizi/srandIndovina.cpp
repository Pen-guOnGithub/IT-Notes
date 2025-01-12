#include <iostream>

// Dadi, finisce entrambi uguali (+ conta tentativi)

int main() {
    srand(time(NULL));
    
    int tentativi = 5;
    
    int randNum = rand()%20+1;
    // std::cout<<randNum<<'\n';
    
    int num;
    bool indovinato = false;
    
    while(tentativi > 0 && !indovinato) {
        std::cout<<"\nIndovina un numero da 1 a 20: ";
        std::cin>>num;
        if(num != randNum) {
            tentativi--;
            if(tentativi > 1) {
                std::cout<<"Hai ancora "<<tentativi<<" tentativi";
            } else if(tentativi == 1) {
                std::cout<<"Hai ancora "<<tentativi<<" tentativo";
            }
        } else {
            std::cout<<"Hai indovinato il numero, che era "<<randNum;
            indovinato = true;
        }
    }
    
    if(indovinato == false) {
        std::cout<<"Hai perso";
    }
}