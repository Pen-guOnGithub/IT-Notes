#include <iostream> // Flussi Input e Output
#include <fstream> // Lettura File .txt

// using namespace std;
using std::cout;
using std::cin;
using std::ifstream;
using std::ofstream;
using std::ios;

void write();
float read(int &count);
bool confronto(float num, float sum, int count);

int main() {
    int num, count = 0;
    float total, x;

    cout<<"Scegli 1 per importare i numeri, 2 per il Totale e 3 per Confrontare: ";
    cin>>num;

    switch(num) {
        case 1:
            write();
            break;
        case 2:
            total = read(count);
            break;
        case 3:
            cout<<"Inserisci un numero: ";
            cin>>x;
            if(confronto(x, total, count)) {
                cout<<"Superiore alla Media";
            } else {
                cout<<"NON Superiore alla Media";
            }
            break;
        default:
            cout<<"Num. Non Disponibile";
    }
}

void write() {
    ofstream fileOutput;
    float price;
    char ans = 's';

    fileOutput.open("func_prices.txt", ios::app);

    if(fileOutput.is_open()) {
        do {
            cout<<"Inserisci un nuovo prezzo: ";
            cin>>price;
            fileOutput<<price<<'\n';
            cout<<"Vuoi aggiungere un prezzo? (s/n): ";
            cin>>ans;
        } while(ans == 's');
    }

    fileOutput.close();
}

float read(int &count) {
    ifstream fileInput;
    float price;
    float min = 9999999999999;
    float total = 0;
    count = 0;

    fileInput.open("func_prices.txt");

    if(fileInput.is_open()) {
        while(!fileInput.eof()) {
            fileInput>>price;
            count++;
            total += price; // total = total + price;
            if(price < min) min = price;
        }
    }
    total -= (min*0.3);

    fileInput.close();

    cout<<"\nNumero Min: "<<min<<", Scontato del 30%: "<<min*0.7<<", Totale: "<<total;
    return total;
}

bool confronto (float num, float sum, int count) {
    if(num >= (sum/count)) {
        return true;
    } else {
        return false;
    }
}