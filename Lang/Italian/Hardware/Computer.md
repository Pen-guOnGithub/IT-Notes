# Computer
*qualsiasi cosa che computa*
Elabora informazioni da input per renderli in output

## Esempi (di computer)
Notebook, Tablet, Smartphone e Phablet

I dispositivi periferici o le periferiche sono dell'hardware accessorio al computer con possibilmente relativo firmware (software collegato) che consentono il dialogo con l'utente (fonti di input, output o entrambi)

Parte che elabora è l'unità centrale (CPU - Central Processing Unit) ed è collocata logicamente tra l'input e l'output

Contenuta nel case (o cabinet) insieme agli altri componenti, tra cui l'alimentatore e il chassis (telaio che sostiene) prodotto con il SECC (Steel Electrogalvanized Cold-rolled Coil)

Case :
- Desktop (poco diffuso, orizzontale)
- Tower (molto più comune, verticale)
    - Mini-tower (fino a 3 slot)
    - Middle-tower (fino a 4 slot)
    - Big-tower (> 4 slot)

Gli slot sono per le periferiche interne aggiuntive

Sulla parte anteriore del case sono presenti :
- Lettore CD / DVD
    - CD = Audio-only format
    - DVD = 480p Video (+ Audio)
    - Blu-Ray = 1080p Video (8x video as dvd, + Lossless Audio --> Lossless = no audio lost during decryption, faithful copy of original)
    - 4K Blu-Ray = 4K Video and much better colours (HDR = High Dynamic Range imaging, HDR10+)
- Slot (numero varia)
- Pulsante accensione e reset (restart/reboot non un factory reset)
- Porte USB e Jack (cuffie / microfono)

Pannello posteriore :
- Presa di alimentazione
- Ventola di raffreddamento dell'alimentatore
- Fessura per il raffreddamento della scheda madre
- Alloggiamenti per schede di espansione
- Porte di comunicazione
    - miniDIN PS/2 : Mouse e tastiera
    - Seriale (bit per bit, più lenta ma dati vanno più lontano)
    - Parallela (ormai in disuso, più veloce ma meno lontano)
    - LAN (Local Area Network - x rete, 1-5 km), MAN (Metropolitan Area Network, 50-60 km, groups up LANs), WAN (Wide ' ', 100-1000 km, groups up MANs - MEN)
    - FireWire (alta velocità audio / video, es. telecamera)
    - USB (un paio qui le altre parte anteriore)
    - S/PDIF output audio "Sony/Philips Digital Interface Format"
    - VGA (Video Graphics Array) collega schermo
    - HDMI (High Definition Multimedia Interface) collega a LIM (Lavagne Interattive Multimediali)
        - 1.0 colori fino 24 bit
        - 1.3 colori fino 48 bit 
        - 1.4 video 3D, 120 Hz
        - 2.0 Ultra HD-4K

Leggi di (Gordon) Moore :
1. Numero di transistor in circuito integrato x2 ogni 18 mesi
2. Investimento necessario per nuovi microprocessori è esponenziale nel tempo + Costo fabbrica chip raddoppia da una gen all'altra

RAM = Random Access Memory, memoria che contiene i dati e i programmi in corso di esecuzione

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

## Modello di (John) Von Neumann
Scienziato ungherese naturalizzato americano\
Usato per la creazione del primo computer digitale (IAS machine)

Architettura base per architetture moderne
- ARM, inizialmente per telefoni, efficente e meno consumo
    - Ora usato anche in Mac M2 (2022) e Windows (2023, Project Volterra)
- x86 (64b), solitamente usato nei computer Windows

Memoria RAM contiene sia dati che programmi (opposto di modello Harvard che ha due distinte memorie centrali)

## Schema Libro

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

## Sistemi di Numerazione Posizionali
Il sistema che usiamo noi oggi è il sistema numerico decimale-posizionale (chiamato a torto sistema numerale arabo in quanto deriva dagli indiani). Si chiama decimale perchè usa come base 10, ed è posizionale perchè la posizione della cifra nel numero cambia il suo valore :
- 132 :
    - 100, l'1 messo a sinistra è il MSB (Most Important Bit)
    - 30
    - 2, assume il valore normale del numero 2 ed è perciò il LSB (Least Important Bit)

Per capire il sistema utilizzato in una sequenza di cifre si fa riferimento al pedice (subscript) che indica la base, es. 1101₂ è binario.

Cifre = Cifre --> Ʃ = {Cifre}

Base - Pedice - Sistema :
- 10 - 10/  - Decimale :
    - b = 10
    - Ʃ = {0,1,2,3,4,5,6,7,8,9}
    - es. 375 :
        - 5 x 10⁰ = 5 x 1 = 5
        - 7 x 10¹ = 7 x 10 = 70
        - 3 x 10² = 3 x 100 = 300
        - 375 = 375
- 2 - 2 - Binario :
    - b = 2
    - Ʃ = {0,1}
    - es. 1101₂ :
        - 1 x 2⁰ = 1 x 1 = 1
        - 0 x 2¹ = 0 x 2 = 0
        - 1 x 2² = 1 x 4 = 4
        - 1 x 2³ = 1 x 8 = 8
        - 1101₂ = 13
- 8 - 8 - Ottale :
    - Ʃ = {0,1,2,3,4,5,6,7}
    - es. 1057₈ :
        - 7 x 8⁰ = 7 x 1 = 7
        - 5 x 8¹ = 5 x 8 = 40
        - 0 x 8² = 0 x 64 = 0
        - 1 x 8³ = 1 x 512 = 512
        - 1057₈ = 559₁₀ = 559
- 16 - H - Esadecimale :
    - Ʃ = {0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F}, dove :
        - A = 10
        - B = 11
        - C = 12
        - D = 13
        - E = 14
        - F = 15
    - es. 34Eₕ (l'h dovrebbe essere maiuscola ma non trovo il simbolo, va bene anche questa) :
        - E x 16⁰ = E x 1 = 14
        - 4 x 16¹ = 4 x 16 = 64
        - 3 x 16² = 3 x 256 = 768
        - 34Eₕ = 846₁₀ = 846

| Sistema     | Numeri |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
| ----------- | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ |
| Binario     | 0000   | 0001   | 0010   | 0011   | 0100   | 0101   | 0110   | 0111   | 1000   | 1001   | 1010   | 1011   | 1100   | 1101   | 1110   | 1111   |
| Ottale      | 00     | 01     | 02     | 03     | 04     | 05     | 06     | 07     | 10     | 11     | 12     | 13     | 14     | 15     | 16     | 17     |
| Decimale    | 0      | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 10     | 11     | 12     | 13     | 14     | 15     |
| Esadecimale | 0      | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | A      | B      | C      | D      | E      | F      |

### 1. Analogico e Digitale
I segnali analogici sono sequenze infiniti di valori istantanei (semplicemente sono segnali continui) e si possono convertire in segnali digitali (che in italiano significa numerico, cioè con uno o più numeri - istanti) campionando istanti equidistanti del segnale, rendendolo discreto e poi digitalizzando il campionamento, cioè unire i segmenti per creare un grafico ad onde.
### 2. Passaggio da Analogico a Digitale
Per trattare i dati analogici con un computer bisogna convertirli in digitali, in quanto è già capace di interpretare i segnali digitali con il sistema binario.
Per eseguire la conversione ha bisogno di un microprocessore e due file che convertano in un senso e viceversa.
### 3. Codice Binario
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

Il sistema binario trova motivazioni ben precise :
- Due sono gli stati di carica elettrica
- Due sono gli stati di polarizzazione di una sostanza magnetizzabile
- Passaggio on/off di una corrente in un conduttore
- Passaggio on/off di luce in un cavo ottico
### 4. Dati Alfabetici in Binario
Cioè :
- 26 Caratteri alfabeto anglosassone minuscoli
- 26 Caratteri alfabeto anglosassone maiuscoli
- 10 Cifre numeriche
- Parentesi e operatori
- Caratteri particolari, punteggiatura e lettere accentate

Metodo usato = ASCII (American Standard Code for Information Interchange), usa 8 bit e non 7 perchè così versione estesa con +128 caratteri di lettere accentate in altri paesi (es. Repubblica Ceca)

Per tradurre ASCII suddividere la sequenza in gruppi di Byte (8 bit) e poi determinare i caratteri secondo la tabella
### 5. Dall'ASCII all'Unicode
Per lingue come l'arabo, il thailandese e il cinese si usa l'Unicode che usa 16 bit (2 B) e oggi sono stati definiti solo 40k codici Unicode di cui la metà per gli ideografi cinesi Han e 11k per le sillabe coreane Hangul

I codici Unicode da 0 a 255 corrispondono ai codici ASCII standard e quindi sono compatibili