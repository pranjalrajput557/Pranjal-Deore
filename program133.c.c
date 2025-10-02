#include <stdio.h>
int main() {
    char *days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    for(int week = 1; week <= 2; week++) {
        printf("Week %d:\n", week);
        for(int d = 0; d < 7; d++) {
            printf("%s ", days[d]);
        }
        printf("\n");
    }
    return 0;
}