/******************************************************************************

Dato un carattere, stampare il mese dell'anno che inizia con quel carattere

Dato un carattere  richiesto e acquisito in input,  stampare a video:
Se il carattere è g oppure G, occorre richiedere ed acquisire in input 
il secondo carattere della parola e quindi:
la stringa "GENNAIO" se il secondo carattere è e oppure E
la stringa "GIUGNO" se il secondo carattere è i oppure I
la stringa "FEBBRAIO'" se il carattere è f oppure F
Se il carattere è m oppure M, occorre richiedere ed acquisire 
in input un numero e quindi:

la stringa "MARZO'" se il numero è 1
la stringa "MAGGIO'" se il numero è 2

Se il carattere è a oppure A, occorre richiedere ed acquisire in input 
il secondo carattere della parola e quindi:
la stringa "APRILE" se il secondo carattere è p oppure P
la stringa "AGOSTO" se il secondo carattere è g oppure G
la stringa "LUGLIO'" se il carattere è l oppure L
la stringa "SETTEMBRE'" se il carattere è s oppure S
la stringa "OTTOBRE'" se il carattere è o oppure O
la stringa "NOVEMBRE'" se il carattere è n oppure N
la stringa "DICEMBRE'" se il carattere è d oppure D
la stringa "NON E' L'INIZIALE DI UN MESE'" per qualsiasi altro carattere

Cristian Ferrante 1Sinf3

*******************************************************************************/
#include <stdio.h>

int main() {
    char prima, seconda;
    int numero;

    printf("Inserisci l'iniziale del mese: ");
    scanf(" %c", &prima);

    switch (prima) {
        case 'g':
        case 'G':
            printf("Inserisci la seconda lettera (e/i): ");
            scanf(" %c", &seconda);
            switch (seconda) {
                case 'e':
                case 'E': printf("GENNAIO\n"); break;
                case 'i':
                case 'I': printf("GIUGNO\n"); break;
            }
            break;

        case 'f':
        case 'F':
            printf("FEBBRAIO\n");
            break;

        case 'm':
        case 'M':
            printf("Inserisci 1 per Marzo o 2 per Maggio: ");
            scanf("%d", &numero);
            switch (numero) {
                case 1: printf("MARZO\n"); break;
                case 2: printf("MAGGIO\n"); break;
            }
            break;

        case 'a':
        case 'A':
            printf("Inserisci la seconda lettera (p/g): ");
            scanf(" %c", &seconda);
            switch (seconda) {
                case 'p':
                case 'P': printf("APRILE\n"); break;
                case 'g':
                case 'G': printf("AGOSTO\n"); break;
            }
            break;

        case 'l':
        case 'L': printf("LUGLIO\n"); break;
        case 's':
        case 'S': printf("SETTEMBRE\n"); break;
        case 'o':
        case 'O': printf("OTTOBRE\n"); break;
        case 'n':
        case 'N': printf("NOVEMBRE\n"); break;
        case 'd':
        case 'D': printf("DICEMBRE\n"); break;

        default:
            printf("NON E' L'INIZIALE DI UN MESE\n");
            break;
    }

    return 0;
}