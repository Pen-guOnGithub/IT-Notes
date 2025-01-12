#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    srand(time(NULL));

    int num = rand()%10+3;

    for(int i = 1; i <= num; i++) {
        for(int j = 0; j < i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}