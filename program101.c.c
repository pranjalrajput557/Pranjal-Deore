#include <stdio.h>
#define PI 3.14
int main() {
    int radius;
    float area;
    printf("Enter radius: ");
    scanf("%d", &radius);

    area = PI * radius * radius;
    printf("Area = %.2f\n", area);

    if(area > 500)
        printf("Large circle! 🔵\n");
    else if(area >= 200)
        printf("Medium circle. 🔘\n");
    else
        printf("Small circle. ⚪\n");

    return 0;
}