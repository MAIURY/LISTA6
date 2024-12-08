#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(char ada[]) {
    int count = 0;
    int inWord = 0;

    for (int i = 0; ada[i] != '\0'; i++) {
        if (isspace(ada[i])) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
    }
    return count;
}

int countCharacters(char ada[]) {
    return strlen(ada); 
}

int maiuscula(char ada[]) {
    int count = 0;
    for (int i = 0; ada[i] != '\0'; i++) {
        if (isupper(ada[i])) {
            count++;
        }
    }
    return count;
}

int minuscula(char ada[]) {
    int count = 0;
    for (int i = 0; ada[i] != '\0'; i++) {
        if (islower(ada[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    char text[100];

    printf("Digite uma frase: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0'; 

    int wordCount  = countWords(text);
    int charCount  = countCharacters(text);
    int maiusCount = maiuscula(text);
    int minusCount = minuscula(text);

    printf("Número de palavras: %d\n", wordCount);
    printf("Número de caracteres (incluindo espaços): %d\n", charCount);
    printf("Número de letras maiúsculas: %d\n", maiusCount);
    printf("Número de letras minúsculas: %d\n", minusCount);

    return 0;
}
