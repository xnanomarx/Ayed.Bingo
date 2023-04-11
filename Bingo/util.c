#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"


void* obtenerMemoria(size_t tamanio){
    void* ptr=malloc(tamanio);
    if(ptr==NULL){
        printf("No se ha podido obtener memoria\n");
        exit(1);
    }
    return ptr;
}

char* crearStringDinamico(char* literal){
    char* buffer=(char*)obtenerMemoria(sizeof(literal));
    strcpy(buffer,literal);
    return buffer;
}

void ordenarVector(int* vector1, int tamanio){
    int i;
    int aux;
    int k;
    for (i = 1; i < tamanio; i++) {
        aux= vector1[i];
        k = i - 1;
        while (k >= 0 && vector1[k] > aux) {
            vector1[k + 1] = vector1[k];
            k = k - 1;
        }
        vector1[k + 1] = aux;
    }
}
