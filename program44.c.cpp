#include <stdio.h>
int main() {
    float inr;
    printf("Enter amount in INR: ");
    scanf("%f", &inr);
    printf("USD = %.2f\n", inr/83.0); // assuming 1 USD = 83 INR
    return 0;
}