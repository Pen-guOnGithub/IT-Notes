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

b = bits  
B = Bytes  
8 bits = 1 Byte

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
### 1. Analogico e Digitale
I segnali analogici sono sequenze infiniti di valori istantanei (semplicemente sono segnali continui) e si possono convertire in segnali digitali (che in italiano significa numerico, cioè con uno o più numeri - istanti) campionando istanti equidistanti del segnale, rendendolo discreto e poi digitalizzando il campionamento, cioè unire i segmenti per creare un grafico ad onde.
### 2. Passaggio da Analogico a Digitale