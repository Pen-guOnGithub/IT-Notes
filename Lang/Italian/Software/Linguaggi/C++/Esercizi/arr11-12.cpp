#include <iostream>
#include <cctype> //tolower()
// #include <cstring> //strlen()

using std::cout;
using std::cin;

int main() {
    char arr[30], arr1[30], arr2[30], arr3[30]; // 29ch + '\0' = Null Terminator

    int ct = 1, size; // array, do-while check, array size counters
    bool inv, alp = true; // invalid ch check, alphabetic order check

    while(ct <= 3) {
        if(ct != 1) cout<<'\n';
        cout<<"\nParola #"<<ct<<" (<= 30 ch): ";
        inv = false;
        do {
            cin.get(arr, 30); // Same as cin>>arr but limits to 29ch + \0
            // < 30 as 30 == '\0'
            cin.ignore(1000, '\n'); // Clear Input Buffer
            size = 0;
            for(int i = 0; i < 30; i++) {
                if(arr[i] != '\0') {
                    size++;
                } else {
                    break;
                }
                if(!((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))) {
                    inv = true;
                }
            }
            if(size > 29 || size == 0 || inv) {
                cout<<"Riprova: ";
                cin.clear(); // Clears Error Flags
            }
        } while(size > 29 || size == 0 || inv);

        cout<<"Parola in Minuscolo: ";
        for(int i = 0; i < size; i++) {
            arr[i] = tolower(arr[i]);
            cout<<arr[i];
            switch(ct) {
                case 1:
                    arr1[i] = arr[i];
                    arr1[size] = '\0';
                    break;
                case 2:
                    arr2[i] = arr[i];
                    arr2[size] = '\0';
                    break;
                case 3:
                    arr3[i] = arr[i];
                    arr3[size] = '\0';
                    break;
            }
        }
        // cout<<"\n\n";
        ct++;
    }

    // Riordinamento Alfabetico
    char temp[30]; // Array Temporaneo usato per scambi

    // Confronto arr1 e arr2
    int i = 0;
    while(arr1[i] != '\0' && arr2[i] != '\0' && arr1[i] == arr2[i]) i++;
    if(arr1[i] < arr2[i]) {
        for(int j = 0; j < 30; j++) {
            temp[j] = arr1[j];
            arr1[j] = arr2[j];
            arr2[j] = temp[j];
        }
    }

    // Confronto arr2 e arr3
    i = 0;
    while (arr2[i] != '\0' && arr3[i] != '\0' && arr2[i] == arr3[i]) i++;
    if (arr2[i] < arr3[i]) {
        for (int j = 0; j < 30; j++) {
            temp[j] = arr2[j];
            arr2[j] = arr3[j];
            arr3[j] = temp[j];
        }
    }

    // Confronto arr3 e arr1
    i = 0;
    while (arr3[i] != '\0' && arr1[i] != '\0' && arr3[i] == arr1[i]) i++;
    if (arr3[i] < arr1[i]) {
        for (int j = 0; j < 30; j++) {
            temp[j] = arr3[j];
            arr3[j] = arr1[j];
            arr1[j] = temp[j];
        }
    }

    cout<<"\n\nOrdine Alfabetico: "<<arr1<<", "<<arr2<<", "<<arr3<<"\n\n";
}