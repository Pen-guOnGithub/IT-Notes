#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() {
    float num;
    string ans;
    
    cout<<"Num : ";
    cin>>num;

    if(num>0) {
        ans="positivo";
    } else if(num<0) {
        ans="negativo";
    } else {
        ans="nullo";
    }

    cout<<"Il numero "<<num<<" è "<<ans<<"."<<"\n";

    return 0;
}