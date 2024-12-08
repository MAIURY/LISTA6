#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MX 100

int main() {
    char ada[MX];
    int count[256] = {0}; 
    int i;

    printf("Digite uma frase: ");
    fgets(ada, sizeof(ada), stdin);
    ada[strcspn(ada, "\n")] = '\0'; 

    // Conta as ocorrências de cada caractere
    for (i = 0; ada[i] != '\0'; i++) {
        count[(unsigned char)ada[i]]++; // Incrementa a contagem do caractere
    }

    printf("\nFrequência de cada caractere na string:\n");
    for (i = 0; i < 256; i++) {
        if (count[i] > 0) { // Exibe apenas caracteres presentes
            printf("'%c' = %d vezes\n", i, count[i]);
        }
    }

    return 0;
}
