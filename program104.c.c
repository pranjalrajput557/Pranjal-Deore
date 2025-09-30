#include <stdio.h>
int main() {
    int force, distance, work;
    printf("Enter force and distance: ");
    scanf("%d %d", &force, &distance);

    work = force * distance;
    printf("Work done = %d Joules\n", work);

    if(work > 1000)
        printf("Heavy work done! 💪\n");
    else if(work >= 500)
        printf("Moderate work. 👍\n");
    else
        printf("Light work. ✨\n");

    return 0;
}