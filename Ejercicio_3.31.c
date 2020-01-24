#include<stdio.h>

int main(){

	int x, y;
	printf("number x : ");
	scanf("%d", &x);
	printf("number y : ");
	scanf("%d", &y);

	/*Si el numero x es menor a 10*/
	if (x < 10){
		/*Y  "y" es mayor a 10 imprime asteriscos*/
		if(y > 10){
			printf("*****\n");
		}else{
		/*Si no imprime numerales y pesos*/
			printf("#####\n");
			printf("$$$$$\n");
		}
	}

	return 0;
}
