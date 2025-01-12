#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

int main() {
    srand(time(NULL));
    // num, num casuale
    int n, nc, lim_max = 31, lim_min = 0, tries = 0, games = 0, max_tries = 0, min_tries = 1000;
    char ans;
    bool eq = false, play = true;
    
    while(play) {
        games++;    
        eq = false;
    
        do {
            cout<<"Inserisci un numero tra 0 e 30: ";
            cin>>n;
        } while(n < 0 || n > 30);
        
        do {
            nc = rand() % (lim_max - lim_min + 1) + lim_min;
            cout<<"Il numero è "<<nc<<" (s/n)? ";
            tries++;
            cin>>ans;
            switch(ans) {
                case 's':
                    if(n == nc) {
                        eq = true;
                    }
                    break;
                case 'n':
                    if(n == nc) {
                        cout<<"\nAre you sure (s/n)? ";
                        cin>>ans;
                    }
                    cout<<"Il numero è più e meno grande di "<<nc<<" (</>)? ";
                    cin>>ans;
                    switch(ans) {
                        case '<':
                            lim_max = nc - 1;
                            break;
                        case '>':
                            lim_min = nc + 1;
                            if(lim_max > 30) lim_max = 30;
                            break;
                        default:
                            cout<<"\nRispondi solo '<' per minore e '>' per maggiore";
                    }
                    cout<<lim_max<<'\n';
                    cout<<lim_min<<'\n';
                    continue;
                    break;
                default:
                    cout<<"\nRispondi solo 's' per si o 'n' per no";
            }
        }
        while(!eq);
        
        cout<<"\nTentativi: "<<tries;
        
        if(tries > max_tries) max_tries = tries;
        if(tries < min_tries) min_tries = tries;
        
        cout<<"\nVuoi continuare a giocare (s/n)? ";
        cin>>ans;
        switch(ans) {
            case 's':
                tries = 0;
                lim_max = 30;
                lim_min = 0;
                play = true;
                break;
            case 'n':
                play = false;
                break;
            default:
                cout<<"\nRispondi solo 's' per si o 'n' per no";
        }
    }
    
    cout<<"\nPartite Svolte: "<<games;
    cout<<"\nMassimo Tentativi: "<<max_tries;
    cout<<"\nMinimo Tentativi: "<<min_tries;
    
    return 0;
}