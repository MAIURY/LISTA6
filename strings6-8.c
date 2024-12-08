#include <stdio.h>
#include <string.h>
#define MX 10
#define LETTERS 26

int anagrama(char ada[], char ada2[], int letters[], int letters2[]) {
    if (strlen(ada) != strlen(ada2)) return 0;

    for (int i = 0; ada[i] != '\0'; i++) {
        if (ada[i] >= 'A' && ada[i] <= 'Z') {
            ada[i] += 32; 
        }
        if (ada2[i] >= 'A' && ada2[i] <= 'Z') {
            ada2[i] += 32; 
        }
        letters[ada[i] - 'a']++;
        letters2[ada2[i] - 'a']++;
    }

    for (int i = 0; i < LETTERS; i++) {
        if (letters[i] != letters2[i]) return 0;
    }

    return 1;
}

int main(void) {
    char ada[MX] = {'R', 'O', 'M', 'A', '\0'};
    char ada2[MX] = {'A', 'M', 'O', 'R', '\0'};
    int letters[LETTERS] = {0};
    int letters2[LETTERS] = {0};

    if (anagrama(ada, ada2, letters, letters2)) {
        printf("As palavras são anagramas\n");
    } else {
        printf("Não são anagramas\n");
    }

    return 0;
}
