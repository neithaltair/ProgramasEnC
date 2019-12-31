#include<stdio.h>

int main(){

int n;
printf("N \t 10*N \t\t 100*N \t\t\t 1000*N\n");

for(n=1; n<11; n++){
	printf("\n %d ",n);
	printf("\t %d ",(n*10));
	printf("\t \t %d ",(n*100));
	printf("\t \t \t %d ",(n*1000));

}
return 0;
}
