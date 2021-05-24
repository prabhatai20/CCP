#include<stdio.h>
#include<math.h>
float area(int a,int b,int c);
void main()
{
    int a,b,c;
    printf("Enter the three sides :: ");
    scanf("%d %d %d",&a,&b,&c);
    area(a,b,c);
}
float area(int a,int b,int c)
{
    float s,ar;
    s=(a+b+c)/2;
    ar=(sqrt(s*(s-a)*(s-b)*(s-c)));
    printf("The area of triangle is ::%.2f",ar);
    return(0);
}
