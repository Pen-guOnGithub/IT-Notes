#include <string>
#include <iostream>
#include <stdlib.h>
#include <ctime>

using std::cout;
using std::cin;
using std::string;

int main() {
	int n;
	cout<<"Array Size: ";
	cin>>n;
	
	int arr1[n], arr2[n], b, di, arr3[n-1]; // number, button, delete_index
	bool exp; // exponential (crescente)
	string str;
	srand(time(NULL));
	
	// Array Init.
	for(int i = 0; i < n; i++) {
		// rand()%(max - min + 1) + min, max = 122, min = 65, 122-65+1 = 58
		arr1[i] = rand()%58+65;
		arr2[i] = rand()%58+65;
	}
	
	do {
		cout<<"\nPress button 1, 2, 3 or 4 to execute. 5 to quit\nButton : ";
		cin>>b;
		cout<<'\n';
		switch(b) {
			case 1:
				for(int i = 0; i < n; i++) {
					do {
						cout<<"Insert arr1["<<i<<"]: ";
						cin>>arr1[i];
					} while(arr1[i] < 65 || arr1[i] > 122);
				}
				cout<<"arr1: ";
				for(int i = 0; i < n; i++) {
					cout<<arr1[i];
					i != n-1 ? cout<<", " : cout<<'\n';
				}
				break;
			case 2:
				exp = true;
				for(int i = 0; i < n-1; i++) {
					if(arr1[i] > arr1[i+1]) exp = false;
				}
				exp == true ? cout<<"arr1 IS exponential\n" : cout<<"arr1 IS NOT exponential\n";
				break;
			case 3:
				str.clear();
				for(int i = 0; i < n; i++) {
					if(arr1[i] >= 65 && arr1[i] <= 122) str += (char)arr1[i];
				}
				cout<<"(string) arr1: "<<str<<'\n';
				break;
			case 4:
				for(int i = 0; i < n; i++) {
					if((arr1[i]%2 == 0 && arr2[i]%2 == 0) || (arr1[i]%2 != 0 && arr2[i]%2 != 0)) {
						arr1[i]++;
						arr2[i]++;
					} else {
						arr1[i]--;
						arr2[i]--;
					}
				}
				for(int i = 0; i < n; i++) {
					cout<<"arr1["<<i<<"]: "<<arr1[i]<<"\tarr2["<<i<<"]: "<<arr2[i]<<'\n';
				}
				break;
		}
	} while(b != 5);
	
	di = rand()%n;
	int j = 0;
	for(int i = 0; i < n; i++) {
		if(i != di) {
			arr3[j] = arr1[i];
			j++;
		}
	}
	cout<<"arr1: ";
	for(int i = 0; i < n; i++) {
		cout<<arr1[i];
		if(i != n-1) cout<<", ";
	}
	cout<<"\narr3: ";
	for(int i = 0; i < n-1; i++) {
		cout<<arr3[i];
		if(i != n-2) cout<<", ";
	}
}             