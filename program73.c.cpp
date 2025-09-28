#include <stdio.h>
int main() {
    char sentence[100];
    printf("Type a sentence: ");
    scanf(" %[^\n]", sentence);   // read full line
    printf("You typed: %s\n", sentence);
    return 0;
}