/*
	Escriba un programa que solicite dos enteros los compare e imprima el numero mayor seguido de "Is larger"
	si los numeros son iguales imprima "these numbers are equals"
*/

#include<stdio.h>

int main(){
	
	int num1, num2;

	printf("Ingrese dos numeros = ");
	scanf("%d %d", &num1, &num2);

	if(num1 > num2)
		printf("%d is larger \n", num1);

	if(num2 > num1)
		printf("%d is larger \n", num2);

	if(num1 == num2)
		printf("These numbers are equals \n");

	return 0;


}
