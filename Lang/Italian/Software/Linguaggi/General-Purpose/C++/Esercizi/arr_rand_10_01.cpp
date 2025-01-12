#include <iostream>

using std::cout;

int main() {
    int arr[8], num;

    srand(time(NULL));

    num = rand()%256;

    cout<<"Il numero "<<num<<" in binario è: ";
    
    for(int i = 0; i < 8; i++) {
        arr[i] = num%2;
        num /= 2;
    }

    for(int i = 7; i >= 0; i--) {
        cout<<arr[i];
    }
}