#include <stdio.h>
int main() {
    printf("Milestones:\n");
    for(int km = 5; km <= 50; km += 5) {
        printf("%d km\n", km);
    }
    return 0;
}