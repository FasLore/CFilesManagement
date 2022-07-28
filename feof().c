//La funzione feof in C serve a sapere se il file pointer si trova posizionato a fine file.

//int feof(FILE *fp);
//La funzione feof ritorna 0 se non è stata raggiunta la fine del file, altrimenti restituisce un valore logico.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f=fopen("C:\\Users\\Lorenzo Fasiello\\CLionProjects\\Gestione File in C\\esempiFunzioni\\0file\\alunni.txt", "rt");
    char cognome[20];
    char nome[20];
    int i, voto;

    if(f==NULL){
        printf("!ERRORE");
        exit(-1);
    } else{
        printf("Apertura avvenuta con successo!\n");
    }

    while(!feof(f)){
        fscanf(f, "%s %s %d\n", &cognome, &nome, &voto);
        printf("cognome: %s, nome: %s, voto: %d\n", cognome, nome, voto);
    }
    fclose(f);

    return 0;
}
