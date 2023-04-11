#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Carton.h"
#include <stdbool.h>

int* jugada20nums(cartonPtr cartonJugador){
    srand(time(NULL));
    int* numerosJugada=(int*)obtenerMemoria(sizeof(int)*20);
    bool bandera=true;

    printf("Los numeros que salieron son:\n");
    for(int i=0;i<20;i++){
        numerosJugada[i]=rand()%100;
        bandera=true;
        while(bandera==true && i>0){
            bandera=false;
            for(int j=0;j<i;j++){
                if(numerosJugada[i]==numerosJugada[j]){
                    numerosJugada[i]=rand()%100;
                    bandera=true;
                }
            }
        }
    }
    ordenarVector(numerosJugada, 20);

    for(int i=0;i<20;i++){
        printf("%d; ", numerosJugada[i]);
    }

    int* vectorTemp=(int*)obtenerMemoria(sizeof(int)*8);
    vectorTemp=getNumeroCarton(cartonJugador);
    int aciertos=0;

    for(int i=0;i<20;i++){
        for(int k=0;k<8;k++){
            if(vectorTemp[k]==numerosJugada[i]){
                aciertos++;
            }
        }
    }

    printf("\nCantidad de aciertos: %d/8. ", aciertos);
    if(aciertos==8){
        printf("Felicidades!!! Ganaste 11 millones de pesos.\n");
    }else if(aciertos==7){
        printf("Felicidades!!! Ganaste 20 mil pesos.\n");
    }else if(aciertos==6){
        printf("Felicidades!!! Ganaste 500 pesos.\n");
    }else if(aciertos==5){
        printf("Felicidades!!! Ganaste 50 pesos.\n");
    }else{
    printf("\nNo ganaste nada :(\n");
    }

    printf("Presione Enter para continuar...");
    fflush(stdout); // Limpia la salida de la consola antes de esperar la entrada
    setbuf(stdin, NULL); // Desactiva el búfer de entrada estándar
    getchar();
}
