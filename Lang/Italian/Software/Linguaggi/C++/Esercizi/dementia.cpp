#include <iostream>

using std::cout;
using std::cin;

int main() {
    cout<<"I have short-term dementia. Press Enter: ";
    bool entered = true;
    
    for(;entered;) {
        if(cin.get() == '\n') {
            entered = true;
            cout<<"I have short-term dementia. Press Enter: ";
        } else {
            entered = false;
            return 0;
        }
    }
}