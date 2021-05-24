#include<stdio.h>
float avg(float a,float b,float c);
void main()
{
    float a,b,c,average;
    printf("\nEnter the three numbers :: ");
    scanf("%f %f %f",&a,&b,&c);
    avg(a,b,c);
}
float avg(float a,float b,float c)
{
    float average;
    average=(a+b+c)/3;
    printf("The Average of three numbers is %f",average);
    return(0);
}
