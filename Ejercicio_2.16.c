	/*  Escriba un programa que solicite al usuario qeu introduzca dos numeros, tome los dos numeros del usuario e imprima
	    la suma , el producto, la diferencia, el cociente y el modulo de los dos numeros.
	*/
#include<stdio.h>

int main(){
	int num1, num2; 
	printf("Ingrese dos numeros = ");
	scanf("%d%d", &num1, &num2);
	printf("La suma de los numeros es %d \n", num1+num2);
	printf("La diferencia de los numeros enteros es %d \n", num1-num2);
	printf("El producto es = %d \n", num1*num2);
	printf("La division es = %d \n", num1/num2);
	printf("El modulo de la division es = %d \n", num1%num2);
}
