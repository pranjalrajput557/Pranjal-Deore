#include <stdio.h>
int main() {
    int marks[5] = {78, 85, 92, 66, 80};
    printf("Students' Marks:\n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i+1, marks[i]);
    }
    return 0;
}