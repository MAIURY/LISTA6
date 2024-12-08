#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char text[100], i=0;

    printf("Digite uma string: ");
    gets(text); 
    printf("Você digitou: %s\n", text);

    printf("Códigos ASCII dos caracteres:\n");
    while (text[i] != '\0') {
        printf("'%c' -> %d\n", text[i], text[i]);
        i++; 
    }

    return 0;
}

   