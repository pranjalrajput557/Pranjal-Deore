#include <stdio.h>
int main() {
    int marathon = 42195; // 42.195 km in meters
    int covered;
    printf("Enter distance covered (in meters): ");
    scanf("%d", &covered);
    printf("Distance left = %d meters\n", marathon - covered);
    return 0;
}