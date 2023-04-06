#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

// Función de obtención de memoria
// Precondicion: Ninguna
// Postcondición: se reserva la memoria solicitada
// o se detiene el programa con un mensaje de error si no se pudo
// Parámetros:
// tamanio: tamaño de la memoria a reservar en size_t
// devuelve void* apuntando a la memoria reservada

void* obtenerMemoria(size_t tamanio);

char* crearStringDinamico(char* literal);

#endif // UTIL_H_INCLUDED
