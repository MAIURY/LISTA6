#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char text[100];
    int i = 0;

    printf("Digite uma cor: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';
   
    printf("Você digitou: \n");
    while (text[i] != '\0') {
        if (text[i] != ' ')
            putchar(text[i]);
        else
            putchar('\n');
        i++;
    }
    printf("\n");

    return 0;
}
