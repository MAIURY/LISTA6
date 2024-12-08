#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MX 100


int is_preposition(char word[]) {
    
    char prepositions[6][4] = {"de", "do", "da", "dos", "das", "e"};
    int i, j;

    
    for (i = 0; i < 6; i++) {

        for (j = 0; word[j] != '\0' && prepositions[i][j] != '\0'; j++) {
            if (word[j] != prepositions[i][j]) {
                break; 
            }
        }

        if (word[j] == '\0' && prepositions[i][j] == '\0') {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    char ada[MX];
    int i, j = 0;
    char word[MX];

    printf("Digite um nome completo (letras iniciais maiúsculas): ");
    fgets(ada, sizeof(ada), stdin);
    ada[strcspn(ada, "\n")] = '\0'; 

    printf("Nome abreviado: ");
    for (i = 0; ada[i] != '\0'; i++) {
    
        if (ada[i] != ' ') {
            word[j++] = ada[i];
        } else {
            word[j] = '\0'; 
            if (j > 0 && !is_preposition(word)) {
                printf("%c.", toupper(word[0])); 
            }
            j = 0; 
        }
    }

    word[j] = '\0';
    if (j > 0 && !is_preposition(word)) {
        printf("%c.", toupper(word[0]));
    }

    printf("\n");

    return 0;
}
