# Software
Insieme dei programmi che fanno funzionare il computer.
Si divide in due categorie :
- Software di Base :
    - Principalmente Sistema Operativo
    - es. BIOS (Basic I/O System) e driver (programma intermediario tra hardware e software, es. Nvidia scheda grafica)
- Software Applicativo :
    - Noti anche come Packages o App, sono i programmi solitamente extra non fondamentali per il funzionamento del computer
    - I programmi wizard installano e disinstallano questi tipi di software
    - Software houses, es. Adobe, Microsoft
    - Software ad hoc / Software on demand --> fatto per risolvere un problema particolare, solitamente commissionato

Licenza del Software (EULA = End User License Agreement) :
- Specifica modalità con cui l'utente può utilizzare e ridistribuire il prodotto
- Imposta da chi detiene il diritto d'autore (copyright)

Licenze possono essere suddivise in :
- Software proprietario (Copyright)
- Software libero (Copyleft)

Solitamente si usa CC (Creative Commons) che è una licenza che garantisce solo alcuni diritti riservati (Some Rights Reserved), a differenza di altre licenze che garantiscono tutti i diritti (All Rights Reserved)

Altre forme di software con licenze :
- Shareware:
    - Software utilizzabile per poco tempo per essere valutato, poi viene solitamente richiesto il pagamento
- Demo:
    - Software promozionale in versione ridotta per prova prima di prendere quello completo
- Adware:
    - Software che richiede di vedere pubblicità per essere usato
- Donationware:
    - Software gratuito (freeware) che chiede di fare donazioni facoltative per sostenere il proprietario
- Abandonware:
    - Software obsoleto non più commercializzato e quindi definito "abbandonato", licenza quindi ora freeware ma inizialmente proibita ridistribuzione

Esistono anche licenze OEM (Original Equipment Manufacturer) usato nella vendita di software abbinato ad hardware (non necessariamente firmware)

Sicurezza dei sistemi informatici = Tecniche che impediscono la violazione di dati sul computer, es:
- Password:
    - Tenuta segreta o sostituita minimo ogni 30 giorni
    - Non facile da indovinare da chi conosci
    - Non contenere parole di uso comune
    - Crittografia (da parte del programma)
- Identificativo dell'utente (2FA = 2 Factor Authentication):
    - SMS, App, etc
- Backup = Copia dei dati più importanti

Privacy
Codice della privacy è un Testo Unico che contiene diverse norme per salvaguardare il diritto alla tutela dei dati personali, anche informatici

Dati personali, si suddividono in :
Dati identificativi = dati personali con cui si indentifica una persona

Dati sensibili = qualsiasi dato importante rilasciato online, possono rivelare :
- Etnicità
- Religione / Filosofia
- Opinioni Politiche
- Stato di Salute
- Vita Sessuale
- Stile di Vita
- Abitudini
- etc

Dati giudiziari = Dati dell'anagrafe giudiziale di una persona :
- es. Divieto o obbligo di soggiorno

Cookie Law (del 2015)
Legge sui Cookie tutela l'utente che naviga obbligando i siti a informarlo sulla politica dei cookie
I cookie sono dei file di testo che memorizzano sul nostro computer durante le ricerche sul web, contengono le ultime ricerche e in alcuni casi anche i dati di autenticazione (password e username)

Ergonomia (da greco, ergos = lavoro, nomos = controllo) = disciplina che progetta prodotti conformi con la salute dell'utente

OS (Operating System) = SO (Sistema Operativo)
Gestisce le risorse del sistema e fornisce un'interfaccia grafica per l'utente
Gli OS vengono anche con API (Application Programming Inferface) che contengono varie funzioni chiamabili da programmatori
OS è già su disco fisso e per poterlo usare è da trasferire alla memoria RAM (processo detto bootstrap) e avviene automaticamente all'avvio del PC, il processo si conclude quando si viene chiesti di fare il login

Struttura di un SO a Livelli / "A buccia di cipolla" (onion skin)
Posizione più interna = Interagiscono più con hardware
Interno
- 1º Livello : Nucleo (Kernel) :
    - Gestisce la CPU
    - Organizza l'esecuzione dei programmi
    - Associa un processo a ogni programma in esecuzione (Windows, Task Manager)
- 2º Livello : Gestore della memoria centrale :
    - Per eseguire un programma deve essere nella memoria RAM, il SO si occupa di dividere le parti del programma di inserire nella memoria RAM per non occupare troppo spazio. Lo divide in "pagine" e "segmenti" e continuamente carica e scarica dati.
    - L'SO garantisce sempre ai programmi in esecuzione una memoria virtuale, simulata su altri dispositivi (che hanno una memoria secondaria, detta "file di paging"), solitamente sul disco fisso. Lo spostamento dalle pagine della memoria di massa alla memoria fisica è detto swapping.
- 3º Livello : Gestore delle periferiche :
    - L'SO virtualizza le risorse rendendole disponibili per ogni processo, definendo dispositivi virtuali che aumentano il numero di periferiche
- 4º Livello : File System :
    - Gestione della memoria di massa, ogni elemento = file, posizione di cartelle = "directory"
- 5º Livello : Interfaccia con l'utente (Shell) :
    - Tutte i comandi tra la macchina e l'utente
    - Due tipi di interfaccia :
        - CLI (Command Line Interface) :
            - MS-DOS (MicroSoft Disk Operative System) - usato nel 1º Computer negli anni '80, Unix
        - GUI (Graphical User Interface)
            - Più "User friendly"
            - Windows, MacOS, Linux
- 6º Livello : Programmi applicativi
Esterno

Partizioni e VM
Più SO possono essere presenti sulla stesso computer e scelti all'avvio ma per fare questo bisogna usare programmi come Partition magic (Windows), GParted (Linux) o Disk Utility (Mac).
Sennò si possono usare VM (Virtual Machine) con programmi come VMWare per avere un computer nel tuo computer con un SO diverso. Sono particolarmente utili nel Pentesting perchè se si rompe qualcosa si possono reinstallare e non si danneggia nulla

Malware = Malicious Software
Usato per "infettare" dispositivi
Tipi principali di malware :
- Virus :
    - Richiedono un hosting per connettere i vari MAC address
    - Replica da solo
    - Infetta programmi
    - Causa furti di dati, DDoS o Ransomware
- Worm :
    - Programmi autonomi (no hosting)
    - Si diffondono nei network molto velocemente, consumando la larghezza di banda
    - Possono anche avere un "payload" da scaricare sull'obbiettivo
- Trojan :
    - Spesso diffuso tramite phishing
    - Sembra un'altra estensione di file (es. immagine)
    - Metodo per consegnare malware, quindi può essere qualsiasi programma
- Ransomware :
    - Cripta i dati e richiede un pagamento per averli indietro
    - Non è detto che vengano ridati dopo un pagamento
- Adware :
    - Mostra annunci indesiderati (popup)
    - Traccia attività dell'utente
    - Solitamente si gestisce con adblocker
- Spyware :
    - Software che spia l'utente
- Rootkit :
    - Nascosto nel profondo del sistema
    - Difficile da rilevare
    - Fornisce accesso ad attaccanti
- Keylogger :
    - Software che spia i pulsanti premuti
- Malware Senza File :
    - Esegue codice tramite file di sistema esistenti
- Cryptojacking :
    - Sfrutta CPU per minare criptovalute
    - Solitamente anche un worm o virus così si contamina velocemente
- Malware Ibrido :
    - Combinazioni di malware (es. trojan-worm)
    - Più difficili da rilevare e rimuovere