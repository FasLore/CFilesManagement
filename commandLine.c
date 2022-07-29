#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_arg (char* arg, int* val);//prototipo di funzione

int main(int argc, char** argv) {

    int row, col, max;
    char *check;

//1.Legge da linea di comando 3 argomenti:numero di righe(row), numero di colonne(col), numero massimo(max)
    if (argc != 4) {
        printf("Error si prega di fornire 3 argomenti: row, col, max\n");
        return 1;

    }
    if (get_arg(argv[1], &row) != 0) return 2;
    if (get_arg(argv[2], &col) != 0) return 2;
    if (get_arg(argv[3], &max) != 0) return 2;


    return 0;
}

int get_arg(char* arg, int* val) //funzione
{
    char* check;
    int num;
    num = strtol(arg, &check, 10);
    if(check && strlen(check) !=  0){
        printf("Gli argomenti devono essere interi");
        return 1;
    }
    *val = num;
    return 0;
}
