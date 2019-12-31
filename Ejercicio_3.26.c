#include<stdio.h>

int main(){
	int n;
	printf(" A \t A+2 \t\t A+4 \t\t\t A+6 \n");

	for(n=3; n<=15; n+=3){
	  printf("\n %d",n);
	  printf("\t %d",(n+2));
	  printf("\t\t %d", (n+4));
	  printf("\t\t\t %d ", (n+6));

	}

	return 0;
}
