#include <iostream>
#include <fstream>

using namespace std;

//testate
float calcolaP(int r);
float calcolaA(int r);
void stampaRisultati(int r, float p, float A);

int main()
{
	int raggio;
	float area, perimetro;
	ofstream Output;
	Output.open("output.txt");

	cout<<"Inserisci il raggio"<<endl;
	cin >> raggio;

	perimetro = calcolaP (raggio);
	area = calcolaA (raggio);

	
	Output<<"Raggio: "<<raggio<<", Perimetro: "<<perimetro<<", Area: "<<area;
	Output.close();
	stampaRisultati(raggio, perimetro, area);
}

float calcolaP(int r)
{
	float per;
	per = 2*r*3.14;
	return per;
}

float calcolaA(int r)
{
	return r*r*3.14;
}

void stampaRisultati(int r, float p, float A)
{
	cout<<"Raggio= "<<r<<"Area= "<<A<<" Perimetro = "<<p<<endl;
}
