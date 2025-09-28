#include <stdio.h>
int main() {
    int arr[5], sum=0;
    printf("Enter 5 numbers: ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Average = %.2f\n", sum/5.0);
    return 0;
}