#include<stdio.h>

int main(){

	int x, y ;
	printf("x = ");
	scanf("%d", &x);
	printf("y = ");
	scanf("%d",&y);

	if( y == 8){

		if (x == 5){
			printf("@@@@@\n");
			/*printf("$$$$\n");*/
			printf("&&&&\n");
		}
	}else{
		printf("####\n");
		printf("$$$$\n");
		printf("&&&&\n"); 
	}


return 0;
}
