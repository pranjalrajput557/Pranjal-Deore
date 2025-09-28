#include<stdio.h>
void main()
{
    printf("this code will find percentage of a student\n");
    int m,p,c,b,s,total;
    float percentage;
    printf("Enter marks obtained in five subjects\n");
    scanf("%d%d%d%d%d",&m,&p,&c,&b,&s);
    total = m + p + c + b + s;
    percentage = total / 5.0;
    printf("Percentage = %f\n",percentage);
}
