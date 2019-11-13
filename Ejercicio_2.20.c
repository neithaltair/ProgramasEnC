/*Escribir un programa que lea el radio de un circulo y que imprima el diametro del mismo
su circunferencia y su area*/

#include<stdio.h>

int main (){

    float pi = 3.14159, radio, diametro, area, circunferencia;
    
    
    printf("Input the radio = ");
    scanf("%f", &radio);

    diametro = radio + radio; 
    area = pi * (radio * radio); 
    circunferencia = 2 * pi * radio;

    printf("Diametro = %f \n", diametro);
    printf("Circunferencia = %f \n", circunferencia);
    printf("Area = %f \n", area);
 
}