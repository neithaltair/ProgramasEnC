#include<stdio.h>

int main(){

    int accountNumber;
    float begbal, totcharges, totcredits, creditLimit, balance; 

    /*Read and save the number account*/
    printf("Enter account number (-1 to end) : \n");
    scanf("%d", &accountNumber);

    /*While the account number be different to -1*/
    while (accountNumber != -1)
    {
        /*Generate the print for the other variables*/
        printf("Enter begginning balance : \n");
        scanf("%f", &begbal); 

        printf("Enter total charges : \n");
        scanf("%f", &totcharges);

        printf("Enter total credits : \n");
        scanf("%f", &totcredits);

        printf("Enter credit limit : \n");
        scanf("%f", &creditLimit);

        balance = (begbal + totcharges - totcredits);

        if (balance > creditLimit)
        {
            printf("\nAccount number = %d \n", accountNumber);
            printf("Credit Limit = %.f \n", creditLimit);
            printf("Account number = %.2f \n", balance);
            printf("Credit limit Exceeded \n \n");

        }

        printf("\nEnter account number (-1 to end) : \n");
        scanf("%d", &accountNumber);
    
    }

    return 0; 
    


}