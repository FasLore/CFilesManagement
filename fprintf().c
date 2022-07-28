#include <stdio.h>
#include <stdlib.h>
#define N 5

int main() {
    FILE *f=fopen("C:\\Users\\Lorenzo Fasiello\\CLionProjects\\Gestione File in C\\esempiFunzioni\\0file\\alunni.txt", "w+t");
    char cognome[20];
    char nome[20];
    int i, voto;

    if(f==NULL){
        printf("!ERRORE");
        exit(-1);
    } else{
        printf("Apertura avvenuta con successo!\n");
    }

    for(i=0;i<N;i++) {
        printf("Cognome: ");
        scanf("%s", cognome);
        printf("Nome: ");
        scanf("%s", nome);
        printf("Voto: ");
        scanf("%d", &voto);
        fflush(stdin);
        fprintf(f, "%s %s %d\n", cognome, nome, voto);
    }
    fclose(f);
    exit(0);

}
