#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <unistd.h> // For usleep() to delay outputs

using std::cout;

int main() {
	// char citta[9] = {'T','M','B','C','P','V','N','A','\0'};
	char citta[9] = {'T','M','B','C','P','V','N','A'}; // Lo ('\0') aggiunge il compilatore
	int tempMin[9], tempMax[9], totMin = 20, totMax = 0, contMin = 1, escMax = 0, emp = 0;
	// emp = escMax_pos
	
	srand(time(NULL));
	
	for(int i = 0; i < 8; i++) {
		tempMin[i] = rand()%10;
		tempMax[i] = tempMin[i] + rand()%10 + 1;
	}
	
	cout<<"Citta: \t";
	for(int i = 0; i < 8; i++) { cout<<'\t'<<citta[i]<<" "; usleep(50000); }
	cout<<"\nTemp Min: ";
	for(int i = 0; i < 8; i++) { cout<<'\t'<<tempMin[i]<<" "; usleep(50000); }
	cout<<"\nTemp Max: ";
	for(int i = 0; i < 8; i++) { cout<<'\t'<<tempMax[i]<<" "; usleep(50000); }
	
	cout<<"\n\n(Tot) Temp Min: ";
	for(int i = 0; i < 8; i++) {
		if(tempMin[i] < totMin) {
			totMin = tempMin[i];
			contMin = 1;
		} else if(tempMin[i] == totMin) {
			contMin++;
		}
	}
	usleep(50000);
	cout<<totMin<<", Times: "<<contMin<<"\n(Tot) Temp Max: ";
	for(int i = 0; i < 8; i++) {
		if(tempMax[i] > totMax) {
			totMax = tempMax[i];
		}
	}
	usleep(50000);
	cout<<totMax<<"\n(Tot) Escursione Max: ";
	for(int i = 0; i < 8; i++) {
		if(escMax < (tempMax[i] - tempMin[i])) {
			escMax = tempMax[i] - tempMin[i];
			emp = i;
		}
	}
	usleep(50000);
	cout<<escMax<<", Citta: "<<citta[emp]<<'\n';
}