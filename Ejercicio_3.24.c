/*Encuentre el numero mayor de una lista de numeros ingresados */
#include<stdio.h>

int main(){
    int counter, number, largest = 0;

    for(counter = 0; counter < 10; counter++){
        printf("Ingrese el %d numero = ", counter);
        scanf("%d",&number);

        if (number > largest)
        {
            largest = number;
        }
    }

    printf("The largest number is : %d \n", largest);
    return 0; 
}
