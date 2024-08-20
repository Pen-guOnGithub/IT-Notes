# C++
Characteristics:
- Mid-level
- Object-oriented
- Uses ;
- Case-sensitive

## File Structure
Yes
```c++
#include <iostream>

using std::cout;

int main() {
    
    cout<<"Hello World";

    return 0;
}
```

## Data Types
Determine the type of data the variable holds when declared;

Numbers:
```c++
// Integers (No decimals, - 0 +)
int num1 = 1;

// Doubles (Decimals, smaller numbers)
double num2 = 1.5;

// Float (Decimals, bigger numbers)
float num3 = 2.5;

// Char (Single character)
char ch = 'A';

// String (Multiple chars)
#include <cstring>
using std::string;
string str = "Hello World";
```

## Pointers
Are variables that "point" to memory ADDRESSES of other variables.
Declaration "type * name"
`int *ptr` ptr is the variable name, * asterisk (without it normal variable, multiple if pointer to pointer), data type it points to
```c++
int x = 10;
int *ptr = &x;
// & = Address Op, Used to point to x's data LOCATION (address)
int y = *ptr
// * = Dereferencing Op, Used to access data from the ADDRESS the pointer points to
```
NullPointerException, address invalid (missing, corrupt, intentional, changed location - update, etc)
`int *ptr = nullptr`

// Arrays not covered yet but return to once covered
Pointers + Arrays
int arr[3] = {5, 10, 5}
int *ptr = arr; // Points to first element in array, 5
ptr++; // Shifts once to the right, 10
ptr--; // Shifts once to the left, 5
ptr = ptr + 2; // 15
std::cout<<*ptr<<'\n' // To print it use the asterisk to retrieve data

Pointers++
int var = 10;
int *ptr = &var;
int **ptr2 = &ptr;
int ***ptr3 = &ptr2;
std::cout<<**ptr2<<'\n'; // Double asterisk cuz 2 pointers
std::cout<<***ptr3<<'\n'; // Triple asterisk cuz 3 pointers

Dynamic Memory Allocation (dynamic = at runtime, when executing code, static : i.e. fixed size array, etc)
int* ptr = new int;  // Dynamically allocate memory for an integer
*ptr = 20;

std::cout << *ptr << std::endl;  // Outputs 20

delete ptr;  // Deallocate the memory

## Operators
There are different types of operators, and these are:
- Arithmetic = {+, -, *, /, %}
- Relational = {>, >=, <, <=, ==, !=}
- Logical = {&&, ||, !}
- Bitwise = {&, |, <<, >>, ~, ^}
- Assignment = {=, +=, -=, *=, /=, %=}
- Unary = {++, --}
- Ternary = { ? : }
- Scope Resolution = { :: }
- Address = { & }
- Dereferencing = { *, ** }

Out of these operators
Don't worry about trying to understand the code as of right now, just look at how and where the different operators are used;
```c++
#include <iostream>
#include <cstring>

int main() {
    int num1, num2, ans;
    char op;
    const char str[] = "+-*/%";
    bool allowed = false;

    // Scope Resolution (::)
    std::cout<<"Input Number #1: ";
    std::cin>>num1;

    std::cout<<"Input Number #2: ";
    std::cin>>num2;

    do {
        std::cout<<"Input Arithemetic Operator: ";
        // Arithmetic (op is the arithmetic operator inputted by the user)
        std::cin>>op;
        // Relational (!=) & Ternary (?:)
        strchr(str, op) != NULL ? allowed = true : allowed = false;
        // Logical (!)
    } while(!allowed);

    switch(op) {
        case '+':
            ans = num1 + num2;
            std::cout<<"Answer: "<<ans<<'\n';
            break;
        case '-':
            ans = num1 - num2;
            std::cout<<"Answer: "<<ans<<'\n';
            break;
        case '*':
            ans = num1 * num2;
            std::cout<<"Answer: "<<ans<<'\n';
            break;
        case '/':
            ans = num1 / num2;
            std::cout<<"Answer: "<<ans<<'\n';
            break;
        case '%':
            ans = num1 % num2;
            std::cout<<"Answer: "<<ans<<'\n';
            break;
    }

    return 0;
}
```

## Control Statements
Control statements are, as the name implies, statements which control the flow of your code, or simply put they check conditions that you determine and act accordingly;

In the previous section, various control statements were used and those are If-else statements (using ternary operators), Switch statements, Do-while loops and Break statements;

This is a list of what each of them do:
- ### If Statements:
    - Check a condition and execute the code in the curly braces;
    - Can be nested by putting multiple If statements inside of each other, though this usually isn't a good practice;
    - Example:

        ```c++
        // Checks the age you input before running code

        #include <iostream>
        
        using std::cout;
        using std::cin;

        int main() {
            int age = 0;
            
            cout<<"Input your age";
            cin>>age;

            if(age >= 18) {
                // Run code, this could be a check to play something like GTA (because nothing runs if you're underage)
            }
        }
        ```
    - If statements are typically the base upon which we can add extra conditions;
    - Before using them, a concept to really understand is that code is read from top to bottom, meaning if the original If check isn't true the code UNDER IT is going to execute;
    - Extra conditions:
        - Else: 
            - Runs if the original If condition is false;
            - Example:

            ```c++
            if(age >= 18) {
                // This runs if you're 18 or over
            } else {
                // This runs if you're 17 and under
            }
            ```
        - Else if: 
            - Another condition between the original If and (not necessarily) the Else;
            - Example:

            ```c++
            if(age >= 18) {
                // This runs if you're 18 or over
            } else if(age >= 0) {
                // This runs if you're under 18 but at least born
            } else {
                // Fetuses don't have keyboards let alone mice
            }
            ```

- ### Break Statements:
    - Can only be used within a loop or switch to exit out of them;
    - Example:

    ```c++
    // The break statement exits out of the loop and stops at 5, without it the loop would've kept going until 10

    #include <iostream>

    using std::cout;
    using std::endl;

    int main() {
        for(int i = 1; i<=10; i++) {
            cout<<i<<endl;
            if(i == 5) {
                break;
            }
        }
    }
    ```

- ### Switch Statements:
    - Effective ladders that replace long if-else-if statements;
    - They utilize Break statements within them which is why I covered them earlier;
    - Example:

    ```c++
    #include <iostream>
    #include <cstring>

    using std::cout;
    using std::cin;
    using std::string;

    int main() {
        string fruit;

        cout<<"Fruits available: Apples, bananas and oranges";
        cout<<"Choose a fruit and we'll tell you its colour: ";
        cin>>fruit;

        switch(fruit) {
            case "Apple":
                cout<<"Red";
                break;
            case "apple":
                cout<<"red";
                break;
            case "Banana":
                cout<<"Yellow";
                break;
            case "banana":
                cout<<"yellow";
                break;
            case "Orange":
                cout<<"Orange";
                break;
            case "orange":
                cout<<"orange";
                break;
            default:
                cout<<"We don't have that fruit";
                break;
        }
    }

    return 0;
    ```

- ### Continue Statements:
    - Can only be used inside of loops to skip the code under it inside the loop and continue said loop;
    - Example:

    ```c++
    // The continue statement skips outputting the number 5 when it is 5

    #include <iostream>

    using std::cout;
    using std::endl;

    int main() {
        for(int i = 1; i<=10; i++) {
            if(i == 5) {
                continue;
            }
            cout<<i<<endl;
        }
    }
    ```

- ### For Loops:
    - 
    - To make it loop infinitely: `for(;;) {}`
    - Example:

    ```c++
    // A simple for loop that counts to 10

    #include <iostream>

    using std::cout;
    using std::endl;

    int main() {
        for(int i = 1; i<=10; i++) {
            cout<<i<<endl;
        }
    }
    ```

- ### While Loops:
    - 
    - Example:

    ```c++
    // A simple while loop that counts to 10 (better to do with a for loop or a do-while loop)

    #include <iostream>

    using std::cout;
    using std::endl;

    int main() {
        bool loop;
        int num = 1;

        while(loop) {
            cout<<num<<endl;
            num++;
            if(num > 10) {
                loop = false;
            }
        }
    }
    ```

- ### Do-While Loops:
    - Executes the code in the do curly braces once then checks the condition before running it again;
    - Example:

    ```c++
    // A simple do-while loop that counts to 10

    #include <iostream>

    using std::cout;
    using std::endl;

    int main() {
        int num = 1;

        do {
            cout<<num<<endl;
            num++;
        } while(num <= 10);
    }
    ```

- ### Goto Statements:
    - Also known as Jump Statements since they allow jumping from one part of the code to another;
    - Not used as much since they can be hard to read;
    - Example:

    ```c++
    // A simple goto statement that helps with daily household side quests

    #include <iostream>

    using std::cout;
    using std::cin;
    using std::endl;

    int main()
    {
        int age = 0;

        start:
            cout<<"How old are ya pal? ";
            cin>>age;

        if(age < 18) {
            cout<<"BRING ME A BEER!"<<endl;
            goto start;
        } else {
            cout<<"may i please have a water? please?"<<endl;
        }

        return 0;
    }
    ```

## Functions
Functions are what you write code inside of, in fact the `int main() {}` you've seen so far is also a function;

Specifically, the main function is the most important one as when you run your program that's what's executing;

In case you know C#, it's basically the `Start()` function;

Anyhow, functions reduce repetition of code as they can be called multiple times;

This is the syntax of a function:

```c++
// Function declaration syntax

// "type" == "data-type"
return_type function_name(parameter_type parameter_name) {
    // function body
}
```

There's 2 types of functions, depending on whether the user wrote them or not:
- ### Library Functions
    - Functions declared in the C++ header files ready to be used;
    - Examples:
        - Header file: `#include <cmath>`, Function: `pow()`,
            - Usage: Power
            - Alternative: `base * base;`
            - Syntax: `pow(base, exponent);`
        - Header file: `#include <cmath>`, Function: `sqrt()`,
            - Usage: Square root
            - Alternative: `pow(num, 0.5);`
            - Syntax: `sqrt(num);`
        - Header file: `#include <cstring>`, Function: `strchr()`,
            - Usage: Returns a pointer value to where the first character you want is in the string
            - Syntax: `char *strchr(const char *str, int c);`
- ### User-Defined Functions:
    - Functions declared by the user in the program (i.e. any functions you make);
    - Example:

        ```c++
        #include <iostream>
        #include <cstring>

        using std::cout;
        using std::cin;
        using std::string;

        string name;

        string skibidize(string name);

        int main() {
            cout<<"Name: ";
            cin>>name;
            cout<<skibidize(name)<<'\n';
        }

        string skibidize(string name) {
            return "Skibidi "+name;
        }
        ```

Call by value and call by reference
In "Call by Value" we're dealing with an initialized variable directly passed to a function that changes its value, but the changed variable is stored locally in the function's stack memory and thus when we cout the variable we will get the initial value.

To fix this, we use "Call by Reference" which simply means passing an &address (so the location) of the variable in the function. Refer to Pointers if not fully understood yet.

## Arrays
Basically just lists, when initialized in square brackets number of elements, when called starts from 0 so -1.
#include <iostream>
int arr[3] = {1, 2, 3};
// Loop through array
arr[0] = 0;
cout<<arr[0]<<'\n';
for (int i: arr) {
    std::cout<<i<<std::endl
}
for (int i = 0; i < 3; i++) {
    std::cout<<i<<std::endl
}