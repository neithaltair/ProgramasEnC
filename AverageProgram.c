/*Class average program with sentinel-controlled repetition*/

#include<stdio.h>

int main(){
    float average;
    int counter, grade, total; 

    /*initialization phase*/
    total = 0;
    counter = 0;

    /*Proceesing phase*/
    printf("Enter grade, -1 to end = ");
    scanf("%d", &grade);

    while (grade != -1)
    {
        total = total + grade; 
        counter = counter + 1;
        printf("ENter grade, -1 to end : ");
        scanf("%d", &grade);

    }
    
    /*termination phase*/
    if (counter != 0)
    {
        average = (float) total/counter;
        printf("Class average is %.2f \n", average);
    }else
    {
        printf("No grades were entered\n");
    }
    
    return 0;

}