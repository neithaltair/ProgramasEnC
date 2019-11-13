#include<stdio.h>

int main(){

    float sales, porcent, sum;
    /*Se pide la cantidad de ventas en la semana*/
    printf("Enter the sales in the week = ");
    scanf("%f", &sales);

    while (sales != -1)
    {
        /*Se calcula el porcentaje correspondiente a las ventas*/
        porcent = (sales * 0.09);

        /*Se suma el porcentaje con los 200 semanales*/
        sum = (porcent + 200);

        /*Imprime el total del salario a pagar*/
        printf("Salary is = %.2f \n", sum);

        /*Lee la cantidad de ventas de otro vendedor*/
        printf("\nEnter the sales in the week = ");
        scanf("%f", &sales);
    }
    
    return 0;

}