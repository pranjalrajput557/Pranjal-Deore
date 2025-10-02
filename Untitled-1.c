#include<stdio.h>

int main()
{
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello Robotics!!\n");
    printf("Welcome, %s\n", name);

    return 0;
}