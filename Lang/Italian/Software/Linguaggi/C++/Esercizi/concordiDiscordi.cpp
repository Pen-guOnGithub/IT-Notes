#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() {
    float num1, num2;
    string ans;

    cout<<"Num1: ";
    cin>>num1;

    cout<<"Num2: ";
    cin>>num2;

    /*
    if(num1>0 && num2>0 || num1<0 && num2<0) {
        ans="concordi";
    } else {
        ans="discordi";
    }
    */

    // Ternary Operator (replaces if-else)
    num1>0 && num2>0 || num1<0 && num2<0 ? ans="concordi" : ans="discordi";

    cout<<"Il numero "<<num1<<" e il numero "<<num2<<" sono "<<ans<<"."<<std::endl;

    return 0;
}