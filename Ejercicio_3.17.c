#include<stdio.h>

int main() {

    float millGalones, galones, contProm = 0, overalAverage;
    int millas, contMillas = 0;

    printf("Enter the gallons used (-1 to end) : \n");
    scanf("%f", &galones);

    while (galones != -1)
    {
        printf("Enter the miles driven \n");
        scanf("%d", &millas);

        millGalones = (float) millas / galones;
        contProm += millGalones;
        contMillas++;

        printf("the milles/galon for this tank was : %.4f \n", millGalones);

        printf("Enter the gallons used (-1 to end) : \n");
        scanf("%f", &galones);
    }

    overalAverage = contProm / contMillas;
    printf("The overal average %.4f ", overalAverage); 

    return 0;
    
}