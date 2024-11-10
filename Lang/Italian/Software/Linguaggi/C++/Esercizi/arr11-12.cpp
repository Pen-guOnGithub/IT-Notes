#include <iostream>
#include <cctype> //tolower()
// #include <cstring> //strlen()

using std::cout;
using std::cin;

int main() {
    char arr[30], arr1[30], arr2[30], arr3[30]; // 29ch + '\0' = Null Terminator

    int ct = 1, size; // array, do-while check, array size counters
    bool inv, alp = false; // invalid ch check, alphabetic order check

    while(ct <= 3) {
        cout<<"Parola #"<<ct<<" (<= 30 ch): ";
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
        cout<<'\n';

        ct++;
    }

    cout<<"Ordine Alfabetico: ";
    if(int(arr1[0]) > int(arr2[0])) {
        if(int(arr1[0]) > int(arr3[0])) {
            if(int(arr2[0]) > int(arr3[0])) {
                // 1, 2, 3
                alp = true;
                cout<<"Sono già in Ordine Alfabetico";
            } else {
                // 1, 3, 2
                cout<<"Non sono già in Ordine Alfabetico: ";
                cout<<"\nOrdine Alfabetico : "<<arr1<<", "<<arr3<<", "<<arr2;
            }
        } else {
            // 3, 1, 2
            cout<<"Non sono già in Ordine Alfabetico: ";
            cout<<"\nOrdine Alfabetico : "<<arr3<<", "<<arr1<<", "<<arr2;
        }
    } else {
        if(int(arr1[0]) > int(arr3[0])) {
            // 2, 1, 3
            cout<<"Non sono già in Ordine Alfabetico: ";
            cout<<"\nOrdine Alfabetico : "<<arr2<<", "<<arr1<<", "<<arr3;
        } else {
            if(int(arr2[0]) > int(arr3[0])) {
                // 2, 3, 1
                cout<<"Non sono già in Ordine Alfabetico: ";
                cout<<"\nOrdine Alfabetico : "<<arr2<<", "<<arr3<<", "<<arr1;
            } else {
                // 3, 2, 1
                cout<<"Non sono già in Ordine Alfabetico: ";
                cout<<"\nOrdine Alfabetico : "<<arr3<<", "<<arr2<<", "<<arr1;
            }
        }
    }
}