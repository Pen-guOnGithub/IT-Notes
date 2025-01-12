#include <iostream>
#include <stdlib.h>
#include <ctime>

using std::cout;

int main() {
    int arr[8], num = 0;
    srand(time(NULL));

    cout<<"Il tuo numero ";
    for(int i = 0; i < 8; i++) {
        arr[i] = rand()%2;
        cout<<arr[i];
    }
    for(int i = 0; i < 8; i++) {
        // 1 << i is known as Bit Shifting (bitwise operation to calculate pow of 2)
        num += arr[7-i] * (1 << i);
        // Can also be done using pow and #include <cmath>
        // num += arr[7-i] * pow(2, i);
    }
    cout<<" in decimale è: "<<num;
}