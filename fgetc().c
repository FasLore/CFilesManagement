//La funzione fgetc in C legge un carattere da un file, precedentemente aperto con la funzione fopen.

//int fgetc(FILE *fp)
//La funzione fgetc restituisce un intero, che in caso di successo è il carattere letto, altrimenti, se ad esempio
// raggiunge la fine del file o si ha un errore di lettura, restituisce la costante EOF.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f=fopen("C:\\Users\\Lorenzo Fasiello\\CLionProjects\\Gestione File in C\\esempiFunzioni\\0file\\carattere.txt", "rt");
    char c;

    if(f==NULL){
        printf("!ERRORE");
        exit(-1);
    } else{
        printf("Apertura avvenuta con successo!\n");
    }

    do {
        c = fgetc(f);
        putchar(c);
    } while(c!=EOF);


    fclose(f);
    exit(0);
}
