#include<stdio.h>
void main()
{
   printf("this code will find volume of cone\n");
   float radius, height;
   printf("Enter the radius of the cone\n");
   scanf("%f",&radius);
   printf("Enter the height of the cone\n");
   scanf("%f",&height);
   printf("The volume of the cone is %f\n",(3.14*radius*radius*height)/3)   ;
}
