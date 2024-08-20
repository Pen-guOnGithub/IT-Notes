#include <iostream>

using std::cout;
using std::cin;

int main() {
    double x, y;
    double area;
    double neededPaint;
    double paintCost;
    double totalCost;
    double hours;

    cout<<"Larghezza: ";
    cin>>x;
    cout<<"Altezza: ";
    cin>>y;

    area = x * y;
    neededPaint = area * 4.5;
    if(neededPaint > 56) {
        cout<<"La vernice in magazzino non è sufficiente, mancano "<<area-(56/4.5)<<"m^2\n";
    } else {
        paintCost = (neededPaint*13)+0.22*(neededPaint*13);
        cout<<"Costo Vernice: "<<paintCost<<'\n';
        hours = area/15;
        if(hours < 1) {
            cout<<"Minuti: "<<hours*60<<'\n';
        } else {
            cout<<"Ore: "<<hours<<'\n';
        }
        totalCost = paintCost + 21*hours;
        cout<<"Costo Totale (Vernice + Manodopera): "<<totalCost<<'\n';
    }
}