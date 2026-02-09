#include <stdio.h>
#include <string.h>

int main() {
    char code[100];
    int i, len;

    printf("Enter code name: ");
    scanf("%s", code);

    len = strlen(code);

    for(i = len - 1; i >= 0; i--) {
        printf("%c", code[i]);
    }

    return 0;
