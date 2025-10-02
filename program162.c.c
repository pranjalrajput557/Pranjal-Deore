#include <stdio.h>
int main() {
    int math, science, total;
    printf("Enter marks in Math and Science: ");
    scanf("%d %d", &math, &science);

    total = math + science;
    printf("Total marks = %d\n", total);

    if(total >= 180)
        printf("Excellent! 🏆\n");
    else if(total >= 120)
        printf("Good! 👍\n");
    else
        printf("Needs Improvement. 😅\n");

    return 0;
}