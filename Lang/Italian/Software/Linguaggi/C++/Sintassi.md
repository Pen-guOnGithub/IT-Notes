# C++
Caratteristiche:
- Livello Intermedio
- Orientato agli oggetti
- Usa ;
- Case-sensitive
Impieghi:
- Scuola (1ª Lingua)

## File Structure
Esempio:
```c++
#include <iostream>

using std::cout;

int main() {
    
    cout<<"Ciao Mondo";

    return 0;
}
```

## Tipi di Dati
Delle variabili dichiarate;

Numeri:
```c++
// Interi (Senza decimali, - 0 +)
int num = 1;

// Float (Decimali, numeri più piccoli)
float num = 1.5;

// Double (Decimali, numeri più grossi)
double num = 2.5;

// Carattere (Un Carattere)
char ch = 'A';

// Stringhe (Più Caratteri)
#include <cstring>
using std::string;
string str = "Ciao Mondo";
```

## Operatori
Ci sono diversi tipi di operatori, e questi sono:
- Aritmetici = {+, -, *, /, %}
- Relazionali = {>, >=, <, <=, ==, !=}
- Logici = {&&, ||, !}
- Bitwise = {&, |, <<, >>, ~, ^}
- Assegnazione = {=, +=, -=, *=, /=, %=}
- Unary = {++, --}
- Ternario = { ? : }
- Risoluzione di Ambito = { :: }
- Indirizzo = { & }
- Dereferenziazione = { *, ** }

Non preoccuparti di capire il codice adesso, ma guarda solo a come e dove sono usati i diversi operatori;
```c++
#include <iostream>
#include <cstring>

int main() {
    int num1, num2, ans;
    char op;
    const char str[] = "+-*/%";
    bool allowed = false;

    // Scope Resolution (::)
    std::cout<<"Inserisci Numero #1: ";
    std::cin>>num1;

    std::cout<<"Inserisci Numero #2: ";
    std::cin>>num2;

    do {
        std::cout<<"Inserisci Operatore Aritmetico: ";
        // Aritmetico (op è l'operatore aritmetico inserito dall'utente)
        std::cin>>op;
        // Relazionale (!=) & Ternario (?:)
        strchr(str, op) != NULL ? allowed = true : allowed = false;
        // Logico (!)
    } while(!allowed);

    switch(op) {
        case '+':
            ans = num1 + num2;
            std::cout<<"Risposta: "<<ans<<'\n';
            break;
        case '-':
            ans = num1 - num2;
            std::cout<<"Risposta: "<<ans<<'\n';
            break;
        case '*':
            ans = num1 * num2;
            std::cout<<"Risposta: "<<ans<<'\n';
            break;
        case '/':
            ans = num1 / num2;
            std::cout<<"Risposta: "<<ans<<'\n';
            break;
        case '%':
            ans = num1 % num2;
            std::cout<<"Risposta: "<<ans<<'\n';
            break;
    }

    return 0;
}
```

## Istruzioni di Controllo
Le istruzioni di controllo sono, come implica il nome, istruzioni che controllano il flusso del codice, o semplicemente verificano condizioni che hai determinato e agiscono di conseguenza;

Nella sezione precedente, sono state utilizzate varie istruzioni di controllo e queste sono le istruzioni If-else (utilizzando operatori ternari), istruzioni Switch, cicli Do-while e istruzioni Break;

Questa è una lista di cosa fa ciascuna di esse:
- ### Istruzioni If:
    - Controllano una condizione ed eseguono il codice nelle parentesi graffe;
    - Possono essere annidate mettendo più If uno dentro l'altro, anche se questo di solito non è una buona abitudine;
    - Esempio:
        ```c++
        // Controlla l'età che inserisci prima di eseguire il codice

        #include <iostream>
        
        using std::cout;
        using std::cin;

        int main() {
            int age = 0;
            
            cout<<"Inserisci la tua età: ";
            cin>>age;

            if(age >= 18) {
                // Esegui codice, questo potrebbe essere un controllo per giocare a GTA (pk non succede nulla se minorenne)
            }
        }
        ```
    - Le istruzioni If sono in genere la base su cui possiamo aggiungere condizioni extra;
    - Prima di usarle, un concetto da capire bene è che il codice viene letto dall'alto verso il basso, il che significa che se il controllo If originale non è vero, verrà eseguito il codice SOTTO DI ESSO;
    - Condizioni extra:
        - Else: 
            - Esegue se la condizione originale è falsa;
            - Esempio:
            ```c++
            if(age >= 18) {
                // Questo viene eseguito se hai 18 anni o più
            } else {
                // Questo viene eseguito se hai 17 anni o meno
            }
            ```
        - Else if: 
            - Un'altra condizione tra l'If originale e (non necessariamente) l'Else;
            - Esempio:
            ```c++
            if(age >= 18) {
                // Questo viene eseguito se hai 18 anni o più
            } else if(age >= 0) {
                // Questo viene eseguito se hai 18 anni o più
            } else {
                // I feti non hanno tastiere, figuriamoci i mouse
            }
            ```

- ### Istruzioni Break:
    - Possono essere usate solo all'interno di un ciclo o di uno Switch per uscire da essi;
    - Non consigliabili in un ciclo siccome "rompono" un flow chart;
    - Esempio:
    ```c++
    // L'istruzione break esce dal ciclo e si ferma a 5, senza di essa il ciclo sarebbe continuato fino a 10

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

- ### Istruzioni Switch:
    - Scale efficaci che sostituiscono lunghe istruzioni if-else-if;
    - Utilizzano istruzioni Break al loro interno, motivo per cui le ho trattate prima;
    - Esempio:
    ```c++
    int p;

    cout<<"Piano Ascensore (1, 2 o 3): ";
    cin>>p;
    
    switch(p) {
        case 1:
            cout<<"Sei al 1º Piano";
            break;
        case 2:
            cout<<"Sei al 2º Piano";
            break;
        case 3:
            cout<<"Sei al 3º Piano";
            break;
        default:
            cout<<"Non abbiamo quel piano";
            break;
    }
    ```

- ### Istruzioni Continue:
    - Possono essere usate solo all'interno dei cicli per saltare il codice successivo all'interno del ciclo e continuare l'esecuzione del ciclo stesso;
    - Example:

    ```c++
    // L'istruzione continue salta la stampa del numero 5 quando i è uguale a 5

    for(int i = 1; i<=10; i++) {
        if(i == 5) {
            continue;
        }
        cout<<i<<endl;
    }
    ```

- ### Ciclo For:
    - Smette di ciclare quando la condizione è falsa
    - Per farlo ciclare all'infinito: `for(;;) {}`
    - Esempio:
    ```c++
    // Un semplice ciclo for che conta fino a 10

    // int i = 1 | Inizializzazione variabile
    // i <= 10 | Condizione
    // i++ | Codice eseguito ogni ciclo (Quasi sempre ++ / --)
    for(int i = 1; i<=10; i++) {
        cout<<i<<endl;
    }
    ```

    - Si possono anche Annidare:
        - Esempio (Tabelline):
        ```c++
        // Due for loop annidati per stampare una tabellina fino a 10

        for(int i = 1; i <= 10; i++) {
            for(int j = 1; j <= 10; j++) {
                cout<<i * j<<" ";
            }
            cout<<'\n';
        }
        ```
        - Output:
        ```
        1 2 3 4 5 6 7 8 9 10 
        2 4 6 8 10 12 14 16 18 20 
        3 6 9 12 15 18 21 24 27 30 
        4 8 12 16 20 24 28 32 36 40 
        5 10 15 20 25 30 35 40 45 50 
        6 12 18 24 30 36 42 48 54 60 
        7 14 21 28 35 42 49 56 63 70 
        8 16 24 32 40 48 56 64 72 80 
        9 18 27 36 45 54 63 72 81 90 
        10 20 30 40 50 60 70 80 90 100 
        ```

        - Esempio (Geometria : Quadrato):
        ```c++
        int side;

        cout<<"Lato: ";
        cin>>side;
        cout<<'\n';

        for(int i = 0; i != side; i++) {
            for(int j = 0; j != side; j++) {
                cout<<"* ";
            }
            cout<<'\n';
        }
        ```
        - Output:
        ```
        Lato: 5

        * * * * * 
        * * * * * 
        * * * * * 
        * * * * * 
        * * * * * 
        ```

        - Esempio (Geometria : Quadrato Vuoto):
        ```c++
        int side;

        cout<<"Lato: ";
        cin>>side;
        cout<<'\n';

        for(int i = 0; i != side; i++) {
            for(int j = 0; j != side; j++) {
                if(i == 0 || i == side-1 || j == 0 || j == side-1) {
                    cout<<"* ";
                } else {
                    cout<<"  ";
                }
            }
            cout<<'\n';
        }
        ```
        - Output:
        ```
        Lato: 5

        * * * * * 
        *       * 
        *       * 
        *       * 
        * * * * * 
        ```

        - Esempio (Geometria : Triangolo Vuoto): 
        ```c++
        int h;

        cout<<"Altezza: ";
        cin>>h;
        cout<<'\n';

        for(int i = 0; i < h; i++) {
            // Spazi
                /* Con j < (h - i - 1):
                i = 0, j < h - 1, es. h = 5, j < 4
                i = 1, j < h - 2, es. h = 5, j < 3
                = Diminuiscono più di scende nel triangolo
                */
            for(int j = 0; j < h - i - 1; j++) {
                cout<<"  ";
            }
            // Stelle
                /* Con j < (i * 2 + 1):
                Hai 1, 3, 5 stelle e così via. 
                In sostanza la base è il doppio dell'altezza + le stelle sono dispari quindi + 1
                */
            for(int j = 0; j < (i * 2 + 1); j++) {
                // Prima stella : j == 0
                // Stella fine riga : j == (2 * i)
                // Stelle su ultima riga : i == h - 1
                if(j == 0 || j == (2 * i) || i == h - 1) {
                    cout<<"* ";
                } else {
                    cout<<"  ";
                }
            }
            cout<<'\n';
        }
        ```
        - Output:
        ```
        Altezza: 5

                * 
              *   * 
            *       * 
          *           * 
        * * * * * * * * * 
        ```

        - Esempio (Geometria : Albero): 
        ```c++
        int h;

        cout<<"Altezza: ";
        cin>>h;

        // Corona
        for(int i = 0; i <= h; i++) {
            int spaceCount = h - i + 1;
            int starCount = (i * 2) - 1;
            
            for(int j = 0; j < spaceCount; j++) {
                cout<<" ";
            }

            for(int j = 0; j < starCount; j++) {
                cout<<"*";
            }

            cout<<'\n';
        }

        // Tronco
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < h; j++) {
                cout<<" ";
            }
            cout<<"*\n";
        }
        ```
        Output:
        ```
        Altezza: 5

             *
            ***
           *****
          *******
         *********
             *
             *
             *
        ```

- ### Cicli While:
    - Smette di ciclare quando la condizione è falsa
    - Esempio:
    ```c++
    // Un semplice ciclo while che conta fino a 10 (meglio farlo con un ciclo for o un ciclo do-while)

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

- ### Cicli Do-While:
    - Esegue il codice nelle parentesi graffe una volta poi controlla la condizione prima di eseguirlo di nuovo;
    - Esempio:
    ```c++
    // Un semplice ciclo do-while che conta fino a 10
    int num = 1;

    do {
        cout<<num<<endl;
        num++;
    } while(num <= 10);
    ```

- ### Istruzioni Goto:
    - Conosciute anche come istruzioni di salto, poichè permettono di saltare da una parte del codice a un'altra;
    - Non usate quanto le altre siccome possono essere difficili da leggere;
    - Esempio:
    ```c++
    // Un semplice esempio di istruzione goto che aiuta con compiti domestici giornalieri
    int age = 0;

    start:
        cout<<"Quanti anni hai? ";
        cin>>age;

    if(age < 18) {
        cout<<"PORTAMI UNA BIRRA!"<<endl;
        goto start;
    } else {
        cout<<"Posso avere un po' d'acqua, per favore?"<<endl;
    }
    ```

## Array
Praticamente sono solo liste, quando vengono inizializzati nelle parentesi quadre con il numero di elementi, quando vengono chiamati partono da 0 quindi -1.
Esempio:
```c++
int arr[3] = {1, 2, 3};
// Ciclo attraverso l'array
arr[0] = 0;
cout<<arr[0]<<'\n';

for (int i: arr) {
    cout<<i<<endl;
}
for (int i = 0; i < 3; i++) {
    cout<<i<<endl;
}
for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    i < sizeof(arr)/sizeof(arr[0])-1 ? cout<<arr[i]<<", " : cout<<arr[i]<<'\n';
}
```

## Funzioni
Le Funzioni sono ciò in cui scrivi il codice, infatti il `int main() {}` che hai visto finora è anche una funzione;
- In particolare, la funzione main è la più importante, poiché quando esegui il tuo programma, è quella che viene eseguita;
- Nel caso tu conosca C#, `int main() {}` è fondamentalmente la funzione `Start()`;

In ogni caso, le funzioni riducono la ripetizione del codice poiché possono essere chiamate più volte;\
Sintassi di una Funzione:
```c++
// Sintassi della dichiarazione di una funzione

// "tipo" == "tipo di dato"
// restituito --> una funzione restituisce un valore
tipo_restituito nome_funzione(tipo_parametro nome_parametro) {
    // corpo della funzione
}
```

Ci sono due tipo di funzioni, in base a se sono state scritte dall'utente o no:
- ### Funzioni di Libreria:
    - Funzioni dichiarate nei file header di C++ pronte per essere usate;
    - Esempi:
        - File Header: `#include <cmath>`, Funzione: `pow()`,
            - Utilizzo: Potenza
            - Alternativa: `base * base;`
            - Sintassi: `pow(base, exponent);`
        - File Header: `#include <cmath>`, Funzione: `sqrt()`,
            - Utilizzo: Radice Quadrata
            - Alternativa: `pow(num, 0.5);`
            - Sintassi: `sqrt(num);`
        - File Header: `#include <cstring>`, Funzione: `strchr()`,
            - Utilizzo: Restituisce un pointer alla posizione del primo carattere desiderato nella stringa
            - Sintassi: `char *strchr(const char *str, int c);`
- ### Funzioni Definite dall'Utente:
    - Funzioni dichiarate dall'utente nel programma (cioè qualsiasi funzione che crei);
    - Esempio:
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

Chiamata per valore e Chiamata per riferimento:

Nella "Chiamata per Valore" stiamo trattando una variabile inizializzata direttamente passata a una funzione che ne cambia il valore, ma la variabile modificata viene memorizzata localmente nella memoria stack della funzione e quindi quando eseguiamo il cout della variabile otterremo il valore iniziale.

Per risolvere questo, usiamo la "Chiamata per Riferimento" che significa semplicemente passare un &indirizzo (quindi la posizione) della variabile nella funzione, facendo si che si salvi nell'&. Torna ai pointer se non hai ancora capito bene.

## Pseudorandomness (PRNG)
`srand(time(NULL));` // PRNG(enerator)

`player = rand()%6` // Returns : [0, 5]
`player = rand()%6+1;` // Returns : [1, 6]

`num = rand() % (max - min + 1)` // Returns : [0, max - min]
`num = rand() % (max - min + 1) + min` // Returns : [min, max]

## Pointer
Sono variabili che "puntano" nella memoria agli INDIRIZZI di altre variabili.
Dichiarazione "tipo * nome"
`int *ptr` ptr è il nome della variabile, * asterisco (senza è una variabile normale, multipli se pointer a pointer), il tipo di dato a cui punta (int)
```c++
int x = 10;
int *ptr = &x;
// & = Operatore Indirizzo, Usato per puntare alla POSIZIONE dei dati di x (indirizzo)
int y = *ptr
// * = Operatore di Dereferenziazione, Usato per accedere ai dati dall'INDIRIZZO a cui il pointer punta
```
NullPointerException, indirizzo invalido (mancante, corrotto, intenzionale, cambio posizione - aggiornamento, etc)
`int *ptr = nullptr // Intenzionale`

Pointer + Array
```c++
int arr[3] = {5, 10, 5}
int *ptr = arr; // Punta al primo elemento nell'array, 5
ptr++; // Sposta una volta a destra, 10
ptr--; // Sposta una volta a sinistra, 5
ptr = ptr + 2; // 15
std::cout<<*ptr<<'\n' // Per stamparlo usa l'asterisco per estrarre i dati
```

Pointer++
```c++
int var = 10;
int *ptr = &var;
int **ptr2 = &ptr;
int ***ptr3 = &ptr2;
std::cout<<**ptr2<<'\n'; // Doppia asterisco pk 2 pointer
std::cout<<***ptr3<<'\n'; // Triplo asterisco pk 3 pointer
```

Allocazione Dinamica della Memoria (dinamica = a runtime, quando esegue codice, statica : cioè array dimensione fissa, etc)
```c++
int* ptr = new int;  // Allocare (dinamicamente) la memoria per un intero
*ptr = 20;

std::cout << *ptr << std::endl;  // Stampa 20

delete ptr;  // Deallocare la memoria
```