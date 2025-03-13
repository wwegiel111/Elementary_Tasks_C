#include <stdio.h>

int main(void) {
    char text[100];
    printf("Input a text: ");
    fgets(text, 100, stdin);
    printf("Your text: %s", text);
    return 0;
}
