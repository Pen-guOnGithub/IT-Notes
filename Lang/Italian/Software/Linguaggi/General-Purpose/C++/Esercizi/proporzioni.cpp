#include <iostream>
#include <cstring>
#include <cstdlib>

using std::cout;
using std::cin;
using std::string;

int main() {
    char prop[100];
    double nmbs[4];
    int idx = 0;
    int x_pos = -1;

    cout<<"Inserisci una proporzione (con x per ultimo): \n";
    cin.getline(prop, 100);

    char* ptr = strtok(prop," :=");

    while(ptr != NULL && idx < 4) {
        if (strcmp(ptr, "x") == 0) {
            x_pos = idx;
            nmbs[idx++] = 0;
        } else {
            nmbs[idx++] = atof(ptr);
        }
        ptr = strtok(NULL," :=");
    }

    if (idx == 4 && x_pos != -1) {
        double a = nmbs[0];
        double b = nmbs[1];
        double c = nmbs[2];
        double d = nmbs[3];
        double x;

        switch(x_pos) {
            case 0:
                x = (b * c) / d;
                break;
            case 1:
                x = (a * d) / c;
                break;
            case 2:
                x = (a * d) / b;
                break;
            case 3:
                x = (b * c) / a;
                break;
        }
        cout << "La soluzione per x è: " << x << "\n";
    } else {
        cout << "Formato di proporzione non valido.\n";
    }

    return 0;
}