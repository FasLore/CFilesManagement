//La funzione fgets in C serve a leggere le stringhe in un file, precedentemente aperto con la funzione fopen.

//char *fgets(char *stringa, int lun, FILE *fp)
//Quindi la funzione legge una stringa e la memorizza nella locazione di memoria puntata da stringa. Con lun intendiamo
// il numero massimo di caratteri della stringa che può essere letto. Vengono letti lun-1 caratteri perché ricordiamo
// che la stringa termina con il carattere terminatore (\0). Come abbiamo già spiegato per le altre funzioni, FILE *fp è
// il puntatore al file restituito dalla funzione fopen.

//La funzione ritorna un puntatore alla stringa e nel caso in cui si ha un errore restituisce NULL.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 60


int main()
{
    FILE *fp;
    char nome [FILENAME_MAX],r[N];
    int nr=0, nc=0;

    printf("Nome del file:");
    gets(nome);

    if ((fp=fopen(nome,"rt"))==NULL) {
        printf("Errore nell'apertura del file");
        exit(1);
    }

    while(fgets(r,N,fp)!=NULL) {
        nr++;
        nc+= strlen(r)-1;
    }

    fclose(fp);
    printf("Totale righe: %d\nTotale caratteri: %d\n", nr, nc);

    return 0;
}
