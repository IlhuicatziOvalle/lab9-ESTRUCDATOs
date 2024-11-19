#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ListaDoble/ListaDoble.h"  // Asegúrate de que este archivo incluya las declaraciones necesarias

int main() {
    PQueue ColadeEspera;
    initPQueue(&ColadeEspera,14);

    Pasajero p1 = {"Juanito", &(Rango){90, "VIP"}};
    Pasajero p2 = {"Pedrito", &(Rango){100, "Adulto mayor"}};
    Pasajero p3 = {"Roman", &(Rango){100, "Discapacitado"}};
    Pasajero p4 = {"Benito", &(Rango){60, "Baja"}};
    Pasajero p5 = {"Jorge", &(Rango){70, "Economica"}};
    Pasajero p6 = {"Abril", &(Rango){100, "Discapacitado"}};
    Pasajero p7 = {"Loren", &(Rango){90, "VIP"}};
    Pasajero p8 = {"Monze", &(Rango){70, "Economica"}};
    Pasajero p9 = {"Jose", &(Rango){80, "Alta"}};
    Pasajero p10 = {"Jesus", &(Rango){70, "Economica"}};
    Pasajero p11 = {"Ana", &(Rango){100, "Adulto mayor"}};
    Pasajero p12 = {"Sandra", &(Rango){60, "Baja"}};
    
    insercionHeap(&ColadeEspera, &p1, -1, compararSeveridad);
    insercionHeap(&ColadeEspera, &p2, -1, compararSeveridad);
    insercionHeap(&ColadeEspera, &p3, -1, compararSeveridad);
    insercionHeap(&ColadeEspera, &p4, -1, compararSeveridad);
    insercionHeap(&ColadeEspera, &p5, -1, compararSeveridad);
    insercionHeap(&ColadeEspera, &p6, -1, compararSeveridad);
    insercionHeap(&ColadeEspera, &p7, -1, compararSeveridad);
    insercionHeap(&ColadeEspera, &p8, -1, compararSeveridad);
    insercionHeap(&ColadeEspera, &p9, -1, compararSeveridad);
    insercionHeap(&ColadeEspera, &p10, -1, compararSeveridad);
    insercionHeap(&ColadeEspera, &p11, -1, compararSeveridad);
    insercionHeap(&ColadeEspera, &p12, -1, compararSeveridad);

    // Imprimir los Pasajeros en el MaxHeap 
    printf("Pasajeros en orden de prioridad en el heap:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }

    pq_pop(&ColadeEspera,-1,compararSeveridad);
    // Imprimir los Pasajeros en el MaxHeap 
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }
    pq_pop(&ColadeEspera,-1,compararSeveridad);
    
    // Imprimir los Pasajeros en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }

    pq_pop(&ColadeEspera,-1,compararSeveridad);
    
    // Imprimir los Pasajeros en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }

    pq_pop(&ColadeEspera,-1,compararSeveridad);
    
    // Imprimir los Pasajeros en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }

    pq_pop(&ColadeEspera,-1,compararSeveridad);
    
    // Imprimir los Pasajeros en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }

    pq_pop(&ColadeEspera,-1,compararSeveridad);
    
    // Imprimir los Pasajeros en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }

    pq_pop(&ColadeEspera,-1,compararSeveridad);
    
    // Imprimir los Pasajeros en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }
    /*Llega un nuevo pasajeor*/
    Pasajero p13 = {"Suarez", &(Rango){70, "Economica"}};
    insercionHeap(&ColadeEspera, &p13, -1, compararSeveridad);

    // Imprimir los Pasajeros en el MaxHeap 
    printf("Pasajeros en orden de prioridad en el heap(llego suarez ECONOMICA):\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }
    
    pq_pop(&ColadeEspera,-1,compararSeveridad);
    
    // Imprimir los Pasajeros en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }
    pq_pop(&ColadeEspera,-1,compararSeveridad);
    
    // Imprimir los Pasajeros en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }

    /*llega roberto*/
    Pasajero p14 = {"Roberto", &(Rango){90, "VIP"}};
    insercionHeap(&ColadeEspera, &p14, -1, compararSeveridad);

    // Imprimir los Pasajeros en el MaxHeap 
    printf("Pasajeros en orden de prioridad en el heap(llego Roberto VIP):\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }

     pq_pop(&ColadeEspera,-1,compararSeveridad);
    
    // Imprimir los Pasajeros en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }

 pq_pop(&ColadeEspera,-1,compararSeveridad);
    
    // Imprimir los Pasajeros en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }

 pq_pop(&ColadeEspera,-1,compararSeveridad);
    
    // Imprimir los Pasajeros en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }

 pq_pop(&ColadeEspera,-1,compararSeveridad);
    
    // Imprimir los Pasajeros en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }
     pq_pop(&ColadeEspera,-1,compararSeveridad);
    
    // Imprimir los Pasajeros en el MaxHeap sin funciones adicionales
    printf("\nSe hace pop al atendido:\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }

    // Imprimir los Pasajeros en el MaxHeap 
    printf("Pasajeros en orden de prioridad en el heap(VACIO):\n");
    for (int i = 0; i < ColadeEspera.heap_size; i++) {
        Pasajero *pasajero = (Pasajero *)ColadeEspera.heap[i].valor;
        printf("Nombre: %s\n" ,pasajero->nombre);
    }

    return 0;
}