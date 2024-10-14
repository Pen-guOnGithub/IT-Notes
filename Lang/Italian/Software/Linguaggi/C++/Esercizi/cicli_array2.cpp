#include <iostream>

using std::cout;

int main() {
    float arr[5] = {2.2, -1.5, 10.0, -3.1, 4.2}, sum = 0, sqr;

    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout<<"Somma: "<<sum;
    cout<<"\nQuadrati nell'Array: ";
    for(int i = 0; i < 5; i++) {
        if(i != 4) {
            cout<<arr[i]*arr[i]<<", ";
        } else {
            cout<<arr[i]*arr[i];
        }
    }
}