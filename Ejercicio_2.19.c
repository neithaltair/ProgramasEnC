#include<stdio.h>

int main(){

	int num1, num2, num3, average, product, smallest, largest, sum ;

	printf("Input three diferent integers : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	sum = num1 + num2 +num3;
	average = (num1 + num2 + num3)/3;
	product = num1 * num2 * num3;
	
	
	/* Largest */	
	if(num1 > num2 && num1 > num3)
			largest = num1;

	if(num2 > num1 && num2 > num3)
			largest = num2;

	if(num3 > num2 && num3 > num1)
			largest = num2;	

	
	/*Smallest*/
	
	if(num1 < num2 && num1 < num3)
			smallest = num1;

	if(num2 < num1 && num2 < num3)
			smallest = num2;

	if(num3 < num2 && num3 < num1)
			smallest = num2;	


	printf("Sum is = %d \n", sum);
	printf("Average is = %d \n", average);
	printf("Product is = %d \n", product);
	printf("Smallest is = %d \n", smallest);
	printf("Largest is = %d \n", largest);




}