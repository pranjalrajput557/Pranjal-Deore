#include <stdio.h>
int main() {
    int side, volume;
    printf("Enter side of cube: ");
    scanf("%d", &side);

    volume = side * side * side;
    printf("Volume = %d\n", volume);

    if(volume > 1000)
        printf("Large cube! 📦\n");
    else if(volume >= 500)
        printf("Medium cube. 📦\n");
    else
        printf("Small cube. 🧊\n");

    return 0;
}