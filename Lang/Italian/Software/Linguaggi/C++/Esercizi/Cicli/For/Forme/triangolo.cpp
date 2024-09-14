#include <iostream>

using std::cout;
using std::cin;

int main() {
    int h;

    cout<<"Height: ";
    cin>>h;

    // i is the row index
    for(int i = 0; i < h; i++) {
        // any j is the column index within the row

        // Spaces
        for(int j = 0; j < h - i - 1; j++) {
            cout<<"  ";
        }

        // Stars
        for(int j = 0; j < (i * 2 + 1); j++) {
            // Start Row : j == 0
            // End Row :
            // Last Row : i == h - 1
            if (j == 0 || j == (2 * i) || i == h - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout<<'\n';
    }
}