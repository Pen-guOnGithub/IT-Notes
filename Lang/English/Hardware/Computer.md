# Computer
*anything that computes*
Turns input information into output

## Examples (of computers)
Notebooks, Tablets, Smartphones and Phablets (Phone-Tablet - Bigger Screen)

Touchscreens, 2 types:
- Resistive Screens:
    - 2 Distanced conductive layers, when pressed in a point they touch and the electronic resistance changes
    - PROS:
        - More inputs allowed, works with pressure so it doesn't have to be a conductor
        - More precise
        - Cost less
        - More resistant to dust, dirt or water
    - CONS:
        - Less sensitivity
        - No multi-touch
        - Less trasparent, i.e. less vibrant colors
        - With time they become less reactive cuz they're constantly pressed
- Capacitive Screens:
    - Glass covered with an extremely thin layer of metallic oxide (usually indium-tin known as ITO) which forms a grid of electrodes which create an electric field
    - When a conductive object touches the screen it alters the electric field in that point, and the finger (the human body) is a conductor which causes a variation in the capacity (of storing eletric charge) in that point
    - The sensors at the border of the screen quantify and locate the touch
    - PROS:
        - More sensitivity and reactivity
        - Support multi-touch
        - Major transparency and visibility, vibrant colors, much better in low light conditions
        - Last longer
    - CONS:
        - Need a conductor to recognise touch
        - Sensible to humidity or water
        - Cost more
        - Usually made of glass so easier to break

Peripheral devices or peripherals are accessory hardware of the computer with sometimes relative firmware (linked software) which allow communication with the user (sources of input, output or both)

The part which computes is the Central Processing Unit (CPU) and it's logically located between the input and the output

Contained in the case (or cabinet) alongside the other components, among which the adapter and the chassis (frame that supports) made with SECC (Steel Electrogalvanized Cold-rolled Coil)

Case :
- Pizza Box / Desktop (less used, horizontal):
    - Originally called Pizza Boxes for the 1991 slogan of Aviion Unix:
        - Only if they were tall 2 inches (= 5cm) or less, otherwise called Desktops
        - Slogan: "Who just fit mainframe power in a pizza box?"
    - Then they all took the name of Desktops to contrast their Underdesk counterpart
- Tower (much more common, vertical)
    - Mini-tower (up to 3 slots)
    - Middle-tower (up to 4 slots)
    - Big-tower (> 4 slots)

Slots are additional internal peripherals (or in other words they're also called expansion slots and are in the motherboard)

Front panel :
- CD / DVD Reader
    - CD = Audio-only format
    - DVD = 480p Video (+ Audio)
    - Blu-Ray = 1080p Video (8x video as dvd, + Lossless Audio --> Lossless = no audio lost during decryption, faithful copy of original)
    - 4K Blu-Ray = 4K Video and much better colours (HDR = High Dynamic Range imaging, HDR10+)
- Slots (number varies)
- Start / Stop & Restart buttons
- USB & Jack (headphones / mic) Ports

Back panel :
- Power outlet / socket
- Cooling fan (for the power outlet)
- Cooling gap (for the motherboard)
- Spots for the expansion cards
- Communication ports:
    - miniDIN PS/2 : Mouse & keyboard
    - Serial (bit by bit, slower but data goes farther)
    - Parallel (not used anymore, faster but data)
    - LAN (Local Area Network - x rete, 1-5 km), MAN (Metropolitan Area Network, 50-60 km, groups up LANs), WAN (Wide ' ', 100-1000 km, groups up MANs - MEN)
    - FireWire (high speed audio / video, es. camera)
    - USB (a couple here, rest on front panel)
    - S/PDIF audio output "Sony/Philips Digital Interface Format"
    - VGA (Video Graphics Array) connects screen
    - HDMI (High Definition Multimedia Interface) connects to IWBs (Interactive Whiteboards)
        - 1.0 colors up to 24 bits
        - 1.3 colors up to 48 bits
        - 1.4 video 3D, 120 Hz
        - 2.0 Ultra HD-4K

(Gordon) Moore's Laws :
1. Number of transistors in an integrated circuit x2 every 18 months
2. Investment for new microprocessors is exponential over time + Cost of chip plants x2 from one gen to another

RAM = Random Access Memory, memory which contains the data of the programs currently running

CPU = Central Processing Unit, nel microprocessore
GPU = Graphics Processing Unit

La CPU è più versatile ma più lenta e meno specifica della GPU, come se la CPU fosse una macchina e la GPU un razzo spaziale, la GPU ti porterebbe sicuramente più velocemente alla luna però non sarebbe così viabile per fare la spesa.

Velocità CPU si misura in GHz (GigaHertz)

Adesso con lo sviluppo dell'AI il prezzo sul mercato di aziende come NVIDIA (produce GPU) sale però per allenare modelli di AI è meglio usare TPU o DPU

TPU = Tensor Processing Unit, fatto da Google per il software TensorFlow, fanno tanti calcoli senza avere certi permessi che le GPU dovrebbero avere (tipo l'accesso alla memoria)

DPU = Data Processing Unit, fatti per grandi data center, solitamente su ARM architecture, per networking e muovere dati per facilitare il lavoro della CPU

QPU = Quantum Processing Unit, non usa bit (1 e 0) ma qubit (quantum bits) che possono avere più possibilità contemporaneamente ma quando misurati collassano in una delle possibilità, molto complicati, shor's algorythm algoritmo per brute force molto più rapido di moderno non ancora usabile in computer ma futuro di hardware

HDD = Hard Disk Drive, magnetici\
e
SSD = Solid State Disk, solido, più recente e più veloce

Memory Cards :
- Multimedia Card (MMC)
- Secure Digital (SD)
- Secure Digital High Capacity (SDHC)
- Mini SD
- Micro SD
- Compactflash

Quarzo contiene Biossido di Silicio --> Substrato di Silicio (può essere dopato per essere sia un conduttore che un isolante) --> Transistor --> Con elettricità, codice binario

## (John) Von Neumann's Architecture
Scienziato ungherese naturalizzato americano\
Usato per la creazione del primo computer digitale (IAS machine)

Architettura base per architetture moderne
- ARM, inizialmente per telefoni, efficente e meno consumo
    - Ora usato anche in Mac M2 (2022) e Windows (2023, Project Volterra)
- x64, x86, solitamente usato nei computer Windows

Memoria RAM contiene sia dati che programmi (opposto di modello Harvard che ha due distinte memorie centrali)

## Book Graph

![Grafico Libro](/Lang/Italian/Assets/Images/grafico.png)

Lo schema del libro si ispira all'architettura di Von Neumann in quanto presenta :
- Unità centrale di elaborazione (CPU) :
    - Unità aritmetico-logica (ALU, Arithmetic Logic Unit) =
        - Fa i calcoli
    - Unità di controllo (CU, Control Unit) =
        - Controlla e coordina azioni per esecuzione delle istruzioni
    - Registri =
        - Sequenze di celle di memoria a cui la CPU può accedere velocemente
- Unità di memoria centrale :
    - RAM (Random Access Memory) =
        - Non casuale ma arbitrario, qualsiasi dato può essere raggiunto con la stessa velocità e tempo
        - Volatile, cioè mantiene dati se alimentata, sennò carica dati in memoria di massa e poi si resetta
    - ROM (Read Only Memory) =
        - Contiene i file che consentono al computer di accendersi
    - Cache Memory =
        - Dati usati recentemente
- Unità di I/O (Input/Output) :
    - Periferiche =
        - es. Mouse
    - Memorie di massa (Dischi e USB) =
        - es. Hard Disk (Interno / esterno al case)
        - Conservano programmi e dati in modo permanente
        - Esterne = si collegano al computer con cavo USB o di rete (NAS - Network Attached Storage)
- Bus =
    - Percorsi che seguono i bit per interagire tra i componenti
    - Simile agli EventBus di Java

Componenti del computer sono detti Chip (= Circuiti Integrati)

Tutti Chip montati su Motherboard (= Scheda Madre) insieme alle schede di espansione che vengono montate sugli slot di espansione
    - RAM = rettangolo verde con quadrati neri dentro
    - CPU = Quadrato grigio in un alloggiamento detto ZIF (Zero Insertion Force, pk facile da inserire)

## Positional Number Systems
Il sistema che usiamo noi oggi è il sistema numerico decimale-posizionale (chiamato a torto sistema numerale arabo in quanto deriva dagli indiani). Si chiama decimale perchè usa come base 10, ed è posizionale perchè la posizione della cifra nel numero cambia il suo valore :
- 132 :
    - 100, l'1 messo a sinistra è il MSB (Most Important Bit)
    - 30
    - 2, assume il valore normale del numero 2 ed è perciò il LSB (Least Important Bit)

Per capire il sistema utilizzato in una sequenza di cifre si fa riferimento al pedice (subscript) che indica la base, es. 1101₂ è binario.

Cifre = Cifre --> Ʃ = {Cifre}

Base - Pedice - Sistema :
- 10 - 10/  - Decimale :
    - Ʃ = {0,1,2,3,4,5,6,7,8,9}
    - es. (10 - 10) 375 :
        - 5 x 10⁰ = 5 x 1 = 5
        - 7 x 10¹ = 7 x 10 = 70
        - 3 x 10² = 3 x 100 = 300
        - 375 = 375
- 2 - 2 - Binario :
    - Ʃ = {0,1}
    - es. (2 - 10) 1101₂ :
        - 1 x 2⁰ = 1 x 1 = 1
        - 0 x 2¹ = 0 x 2 = 0
        - 1 x 2² = 1 x 4 = 4
        - 1 x 2³ = 1 x 8 = 8
        - 2⁰ + 2² + 2³ = 1101₂ = 13 // Basta sommare i 2^ degli 1
        - 1101₂ = 13
    - es. (10 - 2, Divisione Ripetuta) 42 :
        - 42 : 2 = (quozienti) 21, (resto) 0
        - 21 : 2 = 10, 1
        - 10 : 2 = 5, 0
        - 5 : 2 = 2, 1
        - 2 : 2 = 1, 0
        - 1 : 2 = 0, 1
        - 42₁₀ = 101010₂ // Si legge da sotto la tabella
    - es. (2 - 2 - 10, Complemento a due) 00000101₂ (= 5) e 0010 (= 2) :
        - Si usa per rappresentare i numeri negativi in binario
        - Invertire il numero in binario :
            - 00000101₂ --> 11111010₂
            - 0010₂ --> 1101₂
        - Sommare 1 alla cifra meno significativa, se c'è già un 1 traslare e lasciare 0 :
            - 11111010₂ + 00000001₂ = 11111011₂ = -5
            - 1101₂ + 0001₂ = 1110₂ = -2
- 8 - 8 - Ottale :
    - Ʃ = {0,1,2,3,4,5,6,7}
    - es. (8 - 10) 1057₈ :
        - 7 x 8⁰ = 7 x 1 = 7
        - 5 x 8¹ = 5 x 8 = 40
        - 0 x 8² = 0 x 64 = 0
        - 1 x 8³ = 1 x 512 = 512
        - 1057₈ = 559₁₀ = 559
    - es. (10 - 8) 3157 :
        - 3157 : 8 = 394, 5
        - 394 : 8 = 49, 2
        - 49 : 8 = 6, 1
        - 6 : 8 = 0, 6
        - 3157₁₀ = 6125₈
- 16 - H - Esadecimale :
    - Ʃ = {0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F}, dove :
        - A = 10
        - B = 11
        - C = 12
        - D = 13
        - E = 14
        - F = 15
    - es. (16 - 10) 34Eₕ (l'h dovrebbe essere maiuscola ma non trovo il simbolo, va bene anche questa) :
        - E x 16⁰ = E x 1 = 14
        - 4 x 16¹ = 4 x 16 = 64
        - 3 x 16² = 3 x 256 = 768
        - 34Eₕ = 846₁₀ = 846
    - es. (10 - 16) 3157 :
        - 3157 : 16 = 197, 5
        - 197 : 16 = 12, 5
        - 12 : 16 = 0, 12 // 12 = C
        - 3157₁₀ = C55ₕ

Come ottenere il resto per la divisione :
- es. 346 : 7 = 49,4285714
    - Arrotondare per difetto = 49
    - 49 x 7 = 343
    - 346 - 343 = 3, 3 è il Resto
    - 346 : 7 = 49, 3

| Sistema     | Numeri |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
| ----------- | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ |
| Binario     | 0000   | 0001   | 0010   | 0011   | 0100   | 0101   | 0110   | 0111   | 1000   | 1001   | 1010   | 1011   | 1100   | 1101   | 1110   | 1111   |
| Ottale      | 00     | 01     | 02     | 03     | 04     | 05     | 06     | 07     | 10     | 11     | 12     | 13     | 14     | 15     | 16     | 17     |
| Decimale    | 0      | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 10     | 11     | 12     | 13     | 14     | 15     |
| Esadecimale | 0      | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | A      | B      | C      | D      | E      | F      |

### 1. Analog & Digital
I segnali analogici sono sequenze infiniti di valori istantanei (semplicemente sono segnali continui) e si possono convertire in segnali digitali (che in italiano significa numerico, cioè con uno o più numeri - istanti) campionando istanti equidistanti del segnale, rendendolo discreto e poi digitalizzando il campionamento, cioè unire i segmenti per creare un grafico ad onde.

### 2. From Analog to Digital
Per trattare i dati analogici con un computer bisogna convertirli in digitali, in quanto è già capace di interpretare i segnali digitali con il sistema binario.
Per eseguire la conversione ha bisogno di un microprocessore e due file che convertano in un senso e viceversa.

### 3. Binary Code
I dati si dividono in 3 gruppi :
- Alfabetici (lettere, o Alfanumerici, " + numeri)
- Numerici (numeri)
- Multimediali (foto, audio e video)

Per codificare i dati si usa il sistema binario, basato su bit, inizialmente usato per descrivere lo stato dei circuiti digitali (1 = on, 0 = off)

Simboli 0 e 1 = b = bit = "binary digit"  
4 b = nibble  
8 b = 1 B = Byte  
1 b = 2^1 = 2 info. es. (0, 1);  
2 b = 2^2 = 4 info. es. (00, 01, 10, 11);  
3 b = 2^3 = 8 info. es. (000, 001, 010, 011, 100, 101, 110, 111);

Il bit più a destra è detto LSB (Least Significant Bit), mentre quello a sinistra è MSB (Most " ") perchè ha il valore più alto

Unità delle Informazioni:
- kB (kilo) = 1024^1 B
- MB (Mega) = 1024^2 B
- GB (Giga) = 1024^3 B
- TB (Tera) = 1024^4 B
- PB (Peta) = 1024^5 B
- EB (Exa) = 1024^6 B
- ZB (Zetta) = 1024^7 B
- YB (Yotta) = 1024^8 B
- RB (Ronna) = 1024^9 B
- QB (Quotta) = 1024^10 B

Il sistema binario trova motivazioni ben precise :
- Due sono gli stati di carica elettrica
- Due sono gli stati di polarizzazione di una sostanza magnetizzabile
- Passaggio on/off di una corrente in un conduttore
- Passaggio on/off di luce in un cavo ottico

### 4. Alfabetical Data in Binary
Cioè :
- 26 Caratteri alfabeto anglosassone minuscoli
- 26 Caratteri alfabeto anglosassone maiuscoli
- 10 Cifre numeriche
- Parentesi e operatori
- Caratteri particolari, punteggiatura e lettere accentate

Metodo usato = ASCII (American Standard Code for Information Interchange), usa 8 bit e non 7 perchè così versione estesa con +128 caratteri di lettere accentate in altri paesi (es. Repubblica Ceca)

Per tradurre ASCII suddividere la sequenza in gruppi di Byte (8 bit) e poi determinare i caratteri secondo la tabella

es. 01000001 = 'A', bisogna vedere la tabella

### 5. From ASCII to Unicode
Per lingue come l'arabo, il thailandese e il cinese si usa l'Unicode che usa 16 bit (2 B) e oggi sono stati definiti solo 40k codici Unicode di cui la metà per gli ideografi cinesi Han e 11k per le sillabe coreane Hangul

I codici Unicode da 0 a 255 corrispondono ai codici ASCII standard e quindi sono compatibili