/*Addition program*/
#include<stdio.h>

int main(){

	int integ1, integ2, sum; /*Declaracion de variables*/
	
	printf("Enter first integer = \n");
	scanf("%d", &integ1);   /*Read an integer*/
	printf("Enter second integer = \n");
	scanf("%d", &integ2);
	sum = integ1 + integ2;
	printf("Sum is %d\n", sum); /*Print sum*/

	return 0; /*Indicate that program ended succesfully*/
} 

