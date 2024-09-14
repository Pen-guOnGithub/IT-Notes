#include <iostream>

using std::cout;
using std::cin;

int main() {
    srand(time(NULL));

    int numCards = rand()%20+20;

    int cardsOne = numCards;
    int cardsTwo = numCards;

    int dieOne;
    int dieTwo;

    int turns = 1;
    int lost3 = 0;


    while(cardsOne > 0 && cardsTwo > 0) {
        turns++;

        dieOne = rand()%6+1;
        dieTwo = rand()%6+1;

        if(dieOne%2 == 0 && cardsOne%2 == 0) {
            cardsTwo = cardsTwo - 3;
        } else if(dieTwo%2 == 0 && cardsTwo%2 == 0) {
            cardsOne = cardsOne - 3;
            lost3++;
        }

        if(dieOne%2 != 0 && cardsOne%2 != 0) {
            cardsTwo = cardsTwo - 4;
        } else if(dieTwo%2 != 0 && cardsTwo%2 != 0) {
            cardsOne = cardsOne - 4;
        }

        cout<<"1, Cards: "<<cardsOne<<'\n';
        cout<<"2, Cards: "<<cardsTwo<<'\n';
    }

    cardsOne == 0 ? cout<<"1 Lost"<<'\n' : cout<<"2 Lost"<<'\n';
    cout<<"Turns: "<<turns<<'\n';
    cout<<"1 Lost 3: "<<lost3<<'\n';
}