#include <iostream>

using std::cout;
using std::cin;

int main() {
    int tank, area;
    float dailyWater;

    cout<<"Serbatoio: ";
    cin>>tank;

    cout<<"Acqua al giorno: "<<tank/5<<'\n';

    cout<<"Area: ";
    cin>>area;

    dailyWater = area * 5;

    if(tank >= dailyWater) {
        cout<<"l'acqua del serbatoio è sufficiente per irrigare il campo"<<'\n';
        // The following line was only used during testing and provides additional data
        // cout<<"Litri al giorno: "<<dailyWater<<'\n';
        cout<<"Per quanti giorni si può irrigare: "<<tank/dailyWater<<'\n';
        cout<<"Costo giornaliero: "<<dailyWater*0.00025<<" euro\n";
        cout<<"Minuti di lavoro giornalieri: "<<dailyWater*15<<'\n';
        // The following line is a better version of the previous
        // cout<<"Tempo di lavoro: "<<(int)(dailyWater*15/60)<<" ore e "<<((int)dailyWater*15)%60<<" minuti\n";
    } else {
        cout<<"non è sufficiente";
        return 0;
    }

    return 0;
}