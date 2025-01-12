#include <iostream>
#include <stdlib.h>
#include <ctime>

using std::cout;
using std::cin;

int main() {
	srand(time(NULL));
	
	int ars, twnt_pos, ct0 = 0, ct20 = 0;
	bool twnt = false;
	
	cout<<"Array Size: ";
	cin>>ars;

	int arr[ars], arr2[ars];
	
	cout<<"Array #1: ";
	for(int i = 0; i < ars; i++) {
		arr[i] = rand()%45+5;
		if(i < ars-1) {
			cout<<arr[i]<<", ";
		} else {
			cout<<arr[i];
		}
		if(arr[i] == 20) {
			twnt = true;
			twnt_pos = i;
		}
	}
	twnt == true ? cout<<"\n20 | SI | ["<<twnt_pos<<"]\n" : cout<<"\n20 | NO | [/]\n";
	cout<<"Array #2: ";
	for(int i = 0; i < ars; i++) {
		arr2[i] = arr[i];
		if(arr2[i]%5 == 0) {
			arr2[i] = 0;
			ct0++;
		}
		if(i < ars-1) {
			cout<<arr2[i]<<", ";
		} else {
			cout<<arr2[i];
		}
	}
	
	// sizeof(arr3)/sizeof(arr3[0])
	
	cout<<"\nArray #3: ";
	int arr3[ars-ct0], j = 0;
	for(int i = 0; i < ars; i++) {
		if(arr2[i] != 0) {
			arr3[j] = arr2[i];
			j++;
		}
	}
	for(int i = 0; i < ars-ct0; i++) {
		if(arr3[i] > 20) {
			ct20++;
		}
		if(i < ars-ct0-1) {
			cout<<arr3[i]<<", ";
		} else {
			cout<<arr3[i];
		}
	}
	
	cout<<"\nArray #4: ";
	int arr4[ct20], k = 0;
	for(int i = 0; i < sizeof(arr3)/sizeof(arr3[0]); i++) {
		if(arr3[i] > 20) {
			arr4[k] = arr3[i];
			k++;
		}
	}
	for(k = 0; k < ct20; k++) {
		if(k < ct20-1) {
			cout<<arr4[k]<<", ";
		} else {
			cout<<arr4[k];
		}
	}
}