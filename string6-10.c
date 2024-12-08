#include <stdio.h>
#include <stdlib.h>
#define MX 50

int main() {
    char ada[MX];
    char letter;
    int i = 0;

    printf("Digite uma frase: ");
    fgets(ada, sizeof(ada), stdin);

    // Remove o '\n' deixado pelo fgets, se presente
    for (i = 0; ada[i] != '\0'; i++) {
        if (ada[i] == '\n') {
            ada[i] = '\0';
            break;
        }
    }

    printf("Digite um caractere: ");
    scanf(" %c", &letter);

    printf("Frase sem o caractere '%c': ", letter);
    for (i = 0; ada[i] != '\0'; i++) {
        if (ada[i] != letter) {
            putchar(ada[i]);
        }
    }
    printf("\n");

    return 0;
}
