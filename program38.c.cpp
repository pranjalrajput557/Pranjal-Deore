#include <stdio.h>
#include <string.h>
int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Number of characters = %d\n", (int)strlen(name));
    return 0;
}