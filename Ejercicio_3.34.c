#include<stdio.h>

int main(){
	int lados;

	printf("Lados = ");
	scanf("%d", &lados);

	/*PARTE INFERIOR*/
	for(int i = 1; i<= lados; i++){
		printf("*");
	}
	printf("\n");
/*+++++++++++++++++++++++++++++++++++++++++++++*/

	for(int i = 1; i<=lados-2; i++){
		printf("*");

		for(int j = 1; j <= lados-2; j++ ){
			printf(" ");
		}

		printf("*\n");
	}

/*++++++++++++++++++++++++++++++++++++++++++++*/
	/*PARTE INFERIOR*/
	for(int i = 1; i<= lados; i++){
                printf("*");
        }
        printf("\n");

return 0;
}
