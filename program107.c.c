#include <stdio.h>
int main() {
    int totalMarks, subjects;
    printf("Enter total marks and number of subjects: ");
    scanf("%d %d", &totalMarks, &subjects);

    if(subjects <= 0)
        printf("Invalid number of subjects! ❌\n");
    else {
        float average = (float)totalMarks / subjects;
        printf("Average marks = %.2f\n", average);

        if(average >= 90)
            printf("Outstanding! 🏆\n");
        else if(average >= 60)
            printf("Good job! 👍\n");
        else
            printf("Needs improvement. 😅\n");
    }

    return 0;
}