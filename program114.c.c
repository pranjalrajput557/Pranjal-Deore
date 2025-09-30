#include <stdio.h>
int main() {
    int totalStudents, classrooms;
    printf("Enter total students and classrooms: ");
    scanf("%d %d", &totalStudents, &classrooms);

    if(classrooms <= 0)
        printf("Number of classrooms must be positive! ❌\n");
    else {
        float studentsPerClass = (float)totalStudents / classrooms;
        printf("Students per classroom = %.2f\n", studentsPerClass);

        if(studentsPerClass > 50)
            printf("Overcrowded! 😓\n");
        else if(studentsPerClass >= 20)
            printf("Moderate crowd. 👍\n");
        else
            printf("Spacious classrooms. 😌\n");
    }

    return 0;
}