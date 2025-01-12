#include <iostream>
#include <cstring>

using namespace std;

using std::cout;
using std::cin;

int main() {
    char str[100]; // Set the char amount/size limit of the string using a non-initialized array

    cout<<"Inserisci una proporzione: \n";
    cin.getline(str, 100); // Gets a whole string
    // cin>>str; Gets a single token (i.e. it only gets the first word)

    /* POINTER EXAMPLE
    char b = 'B';
    char* boo = &b;
    */

    /* NULLPointerException
    char* bee = NULL;
    cout<<bee;
    */

    char* ptr = strtok(str," ,-"); // Declare and initialize a ptr pointer
    // This separates the string into tokens using ' ' ',' '-' as delimiters (can be multiple chars)

    while(ptr != NULL) { // Checks if pointer isn't null
        // Checking if the pointer isn't null is good cuz :
            // You're not wasting bytes on goofbags that don't input text
            // You're dodging a NULLPointerException
            // You're dodging a NULLPointerException
            // You're dodging a NULLPointerException
            // I have dementia
        cout<<ptr<<'\n';
        ptr = strtok(NULL," ,-"); 
    }

    return 0; // OS Exit-Code (0 = Program ran successfully, any other number is sus)
}