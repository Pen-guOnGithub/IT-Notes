#include <iostream>

using std::cout;
using std::cin;

int main() {
    int size;

    cout<<"Size: ";
    cin>>size;

    for(int i = 0; i != size; i++) {
        for(int y = 0; y != size; y++) {
            if(i == 0 || i == size-1 || y == 0 || y == size-1) {
                cout<<"* ";
            } else {
                cout<<"  ";
            }
        }
        cout<<'\n';
    }
}