#include <iostream>
#include <ctime>

using std::cout;
using std::cin;

int main() {
	srand(time(NULL));
	int d = 0, n, j = 0, sum = 0, m;
	d = rand()%6+1;
	cout<<"d: "<<d<<'\n';
	
	if(d %2 == 0) {
		do {
			cout<<"n: ";
			cin>>n;
		} while(n < 2 || n > 20);
		int arr[n];
		cout<<"\narr: ";
		for(int i = 0; i < n; i++) {
			arr[i] = rand()%20-10;
			sum += arr[i];
			i != n-1 ? cout<<arr[i]<<", " : cout<<arr[i]<<'\n';
		}
		m = sum/n;
		cout<<"Media: "<<m;
		int arr2[n];
		bool canStart = false;
		cout<<"\narr2: ";
		for(int i = 0; i < n; i++) {
			if(arr[i] >= m || canStart == true) {
				arr2[j] = arr[i];
				cout<<arr2[j]<<" ";
				j++;
				canStart = true;
			}
		}
	} else {
		int s = d*2, arr3[s];
		cout<<"arr3: ";
		for(int i = 0; i < s; i++) {
			arr3[i] = 100 + i;
			i != (s)-1 ? cout<<arr3[i]<<", " : cout<<arr3[i]<<'\n';
		}
		int arr4[s];
		cout<<"arr4: ";
		for(int i = 0; i < s; i++) {
			if(i == 0) {
				arr4[i] = arr3[s-1];
			} else {
				arr4[i] = arr3[j];
				j++;
			}
			cout<<arr4[i]<<" ";
		}
		cout<<"\narr4 --> arr3: ";
		for(int i = 0; i < s; i++) {
			if(i == 0) {
				arr4[s-1] = arr4[i];	
			}
			arr4[i] = arr3[i];
			cout<<arr4[i]<<" ";
		}
	}
}