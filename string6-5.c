#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char text[100];
    int forma, i=100;

    printf("Digite uma string: ");
    gets(text); 

    printf("String ao contrário: ");
    for (i = strlen(text) - 1; i >= 0; i--) {
        printf("\n");
        putchar(text[i]);
        printf("\n");    }
    printf("\n");

    return 0;
}