#include <stdio.h>

int main()
{
    /*Establecimiento de las variables */
    float hoursWork, hourlyRate, salary, morefour;

    /*Solicita la cantidad de horas trabajadas*/
    printf("Enter # of hours worked (-1 to end) = ");
    scanf("%f", &hoursWork);
    
    /*Mientras la cantidad de horas trabajadas sean diferentes de -1*/
    while (hoursWork != -1)
    {
        /*Solicite la intensidad horaria de la semana*/
        printf("Enter hourly rate of the worker ($00.00) = ");
        scanf("%f", &hourlyRate);

        /*Si la cantidad de horas trabajadas a la semana es mayor a 40*/
        if (hoursWork > 40)
        {
            /*divida la intensidad horaria en dos*/
            morefour = (hourlyRate / 2);

            /*salario = a horas trabajadas por la intensidad mas medio tiempo al superar 40 horas de trabajo*/
            salary = (hoursWork * hourlyRate) + morefour;
            printf("Salary is $ %.3f \n \n", salary);
        }
        else
        {
            /*Si no es mayor a 40 horas, saque el salario*/
            salary = hoursWork * hourlyRate;
            printf("Salary is $ %.3f \n \n", salary);
        }

        printf("Enter # of hours worked (-1 to end) = ");
        scanf("%f", &hoursWork);
    }

    return 0;
}