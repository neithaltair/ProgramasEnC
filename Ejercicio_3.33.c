#include<stdio.h>

int main(){
	/*se crea la variable*/
	int  x;
	printf("Lados del cuadrado = ");
	scanf("%d", &x);
	/*Se almacena el valor ingresado para los lados del cuadro*/

	/*Controla las veces que se repetiran las lineas de los asteriscos*/
	for(int i = 0; i<x; i++){
		/*Se encarga de imprimir la cantidad de * necesarios por cada fila*/
		for(int j = 0 ; j < x; j++){
			printf("*");

		}
	printf("\n");
	}

return 0;
}
