// For 5/11/24
#include <iostream>
#include <cstring> // For strlen()

using std::cout;
using std::cin;
using std::strlen;

int main() {
    char arr[11]; // + \0

    cout<<"Inserisci una parola (<= 10 ch): ";
    // strlen(arr) or cin.get(arr, 10) WITHOUT a do-while loop
    do {
        cin>>arr;
        if(strlen(arr) > 10 || strlen(arr) == 0) {
            cout<<"Riprova : ";
        }
    } while(strlen(arr) > 10 || strlen(arr) == 0);

    cout<<"Parola letta: "<<arr;
    cout<<"\nStampa: La parola termina con la lettera ";

    for(int i = 0; i < 10; i++) {
        if(arr[i] == '\0') {
            cout<<arr[i-1]<<'\n';
            break;
        }
    }
}