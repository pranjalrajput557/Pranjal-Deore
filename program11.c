#include<stdio.h>
void main()
{
   printf("this code will convert fahrenheit to celsius\n");
   float fahrenheit;
   printf("Enter a temperature in fahrenheit\n");
   scanf("%f",&fahrenheit);
   printf("%f fahrenheit is equal to %f celsius\n",fahrenheit,(fahrenheit-32)*5/9);
}
