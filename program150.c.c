#include <stdio.h>
int main() {
    int marksObtained, totalMarks;
    printf("Enter marks obtained and total marks: ");
    scanf("%d %d", &marksObtained, &totalMarks);
    if(totalMarks != 0)
        printf("Percentage = %.2f%%\n", (float)marksObtained / totalMarks * 100);
    else
        printf("Total marks cannot be zero!\n");
    return 0;
}