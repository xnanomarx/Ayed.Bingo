#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Carton.h"




int* jugada20nums(cartonPtr cartonJugador){
    srand(time(NULL));
    int* numerosJugada=(int*)obtenerMemoria(sizeof(int)*20);

    printf("Los numeros que salieron son:\n");
    for(int i=0;i<20;i++){
        numerosJugada[i]=rand()%100;
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

    printf("Cantidad de aciertos: %d/8. ", aciertos);
    if(aciertos==8){
        printf("Felicidades!!! Ganaste 11 millones de pesos.");
    }else if(aciertos==7){
        printf("Felicidades!!! Ganaste 20 mil pesos.");
    }else if(aciertos==6){
        printf("Felicidades!!! Ganaste 500 pesos.");
    }else if(aciertos==5){
        printf("Felicidades!!! Ganaste 50 pesos.");
    }else{
    printf("\nNo ganaste nada :(\n");
    }



    fflush(stdout); // Limpia la salida de la consola antes de esperar la entrada
    printf("Presione Enter para continuar...");
    fflush(stdout); // Limpia la salida de la consola antes de esperar la entrada
    setbuf(stdin, NULL); // Desactiva el búfer de entrada estándar
}
