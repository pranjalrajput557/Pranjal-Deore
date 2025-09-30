#include <stdio.h>
int main() {
    int length, width, area;
    printf("Enter length and width of rectangle: ");
    scanf("%d %d", &length, &width);

    area = length * width;
    printf("Area = %d\n", area);

    if(area > 1000)
        printf("That's a very large rectangle! 🏢\n");
    else if(area >= 500)
        printf("Moderately sized rectangle. 📐\n");
    else
        printf("Small rectangle. 🏠\n");

    return 0;
}