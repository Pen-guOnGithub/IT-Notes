#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::ifstream;
using std::ofstream;
using std::ios;

int main() {
	int arr[100]; // decent size
	int i = 0;
	int temp;

	ifstream Input;
	ofstream Output;
	Input.open("fstream_shifted.txt");

	if(Input.is_open() || Output.is_open()) {
		while(!Input.eof()) { // checks if you're at the end of the file, !eof reads
			Input>>arr[i];
			i++;
		}
		Input.close();
		Output.open("fstream_shifted.txt", ios::app); // ios::app --> append, not rewrite

		/* Cout Array
		for(int j=0; j<i; j++) j < i-1 ? cout<<arr[j]<<" " : cout<<arr[j]<<'\n';
		*/

		// Number Shifting, Right
		temp = arr[i-1];
		for(int j=i-2; j>=0; j--) {
			arr[j+1]=arr[j];
		}
		arr[0] = temp; // 1st pos takes the last number
		for(int j=0; j<i; j++) {
			if(j==0) Output<<"\n\nShifted once to the right:\n";
			Output<<arr[j]<<" ";
		}
		arr[i-1] = arr[0];
		Output.close();
	} else {
		cout<<"Error (search up number) : cant open";
	}
}