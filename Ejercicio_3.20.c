#include<stdio.h>

int main(){
    float loanPrincipal, interesRate, interest, cero;
    int days; 

    /*pedimos el valor del prestamo principal*/
    printf("Enter principal loan (-1 to end) = ");
    scanf("%f", &loanPrincipal);

    /*Mientras el prestamo principal sea diferente de -1*/
    while (loanPrincipal != -1)
    {
        /*Pediremos los otros valores para sacar el interes total*/
        printf("Interest rate = ");
        scanf("%f", &interesRate);

        /*para el ingreso que aparece en el ejemplo se le sumara lo ingresado al una variable con 0
        para asi lograr sacar el porcentaje correcto: 
        ingreso del usuario .8,    0 + .8  =  0.8 */
        cero = 0 + interesRate;

        printf("Enter the term of the loan in days = ");
        scanf("%d", &days);

        /*Se ejecuta la formula para sacar los intereses */
        interest = (loanPrincipal * interesRate * days)/365;

        printf("The interest charge = %.2f \n\n", interest);

        printf("Enter principal loan (-1 to end) = ");
        scanf("%f", &loanPrincipal);
    }

    return 0;
    
}