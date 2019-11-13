#include<stdio.h>
/*Programa que imprima los numeros del 1 al 10 con tres espacios de distancia en la misma linea
usando ciclos*/
int main() {
    int cont = 1;

    while (cont <= 10){
        printf("%d    ", cont);
        cont++;
    }
}