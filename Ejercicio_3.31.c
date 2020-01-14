#include<stdio.h>

int main(){

	int x, y;
	printf("number x : ");
	scanf("%d", &x);
	printf("number y : ");
	scanf("%d", &y);
	if (x < 10){

		if(y > 10){
			printf("*****\n");
		}else{
			printf("#####\n");
			printf("$$$$$\n");
		}
	}

	return 0;
}
