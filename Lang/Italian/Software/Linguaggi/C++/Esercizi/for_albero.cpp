#include <iostream>

using std::cout;
using std::cin;

int main() {
    int h;

    cout<<"Height: ";
    cin>>h;
    cout<<'\n';

    // Tree Crown
    for(int i = 1; i <= h; i++) {
        int starCount = (i * 2) - 1;
        int spaceCount = h - i + 1;
        
        for(int j = 0; j < spaceCount; j++) {
            cout<<" ";
        }

        for(int j = 0; j < starCount; j++) {
            cout<<"*";
        }

        cout<<'\n';
    }

    // Tree Trunk
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < h; j++) {
            cout<<" ";
        }
        cout<<"*\n";
    }
}