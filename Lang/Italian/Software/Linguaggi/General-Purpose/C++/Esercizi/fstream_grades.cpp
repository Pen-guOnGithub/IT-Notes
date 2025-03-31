// file di input

#include <fstream>
#include <iostream>

using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;

int main() {
	ifstream fileInput; // ifstream, nome classe
	ofstream Out;
	
	float vote = 0, arr_vote[4], max = 0;
	int i = 0;
	
	fileInput.open("fstream_grades.txt"); // cerca dove e salvato il file .cpp
	Out.open("maggiore.txt");
	
	if(fileInput.is_open()) {	// == true implicit
		Out<<"Voti : ";
		while(!fileInput.eof()) {
			// REPLACING THE VARIABLE
			fileInput>>vote;
			cout<<vote<<'\n';
			i < 3 ? Out<<vote<<", " : Out<<vote<<'\n';
			if(vote > max) max = vote;
			
			/* // ADDING TO AN ARRAY
			fileInput>>arr_vote[i];
			i < 3 ? cout<<arr_vote[i]<<", " : cout<<arr_vote[i]<<'\n';
			*/
			i++;
		}
		Out<<"Voto massimo : "<<max<<"\n\nNOTA : "<<"Lo studente viene sorpreso durante l'ora di biologia con la collega esperta linguistica esterna con un biglietto di insulti indirizzati a un compagno.";
	} else {
		cout<<"Error 404 : File not present\n";
	}
}