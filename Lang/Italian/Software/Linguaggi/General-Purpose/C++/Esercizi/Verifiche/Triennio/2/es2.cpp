#include <iostream>

using std::cout;
using std::cin;

int main() {
	char arr[11];
	
	cout<<"arr: ";
	cin>>arr;
	
	int s = strlen(arr), j = 0;
	char arr2[s];
	for(int i = s-1; i >= 0; i--) {
		arr2[j] = arr[i];
		j++;
	}
	cout<<"arr2: ";
	for(int i = 0; i < s; i++) {
		i != s-1 ? cout<<arr2[i] : cout<<arr2[i]<<'\n';
	}
	
	cout<<"arr2[*]: ";
	for(int i = 0; i < s; i++) {
		if(
			(arr2[i] == 'A' || arr2[i] == 'E' || arr2[i] == 'I' || arr2[i] == 'O' || arr2[i] == 'U') 
			|| 
			(arr2[i] == 'a' || arr2[i] == 'e' || arr2[i] == 'i' || arr2[i] == 'o' || arr2[i] == 'u')
		) arr2[i] = '*';
		i != s-1 ? cout<<arr2[i] : cout<<arr2[i]<<'\n';
	}
}