#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char text[100];
    int forma, i=0;

    printf("Digite uma string: ");
    gets(text); 

    printf("Digite 0 para letra maiuscula ou 1 para letra minuscula: ");
    scanf("%d", &forma);

    if (forma == 0) {
    
        for (i = 0; text[i] != '\0'; i++) {
            text[i] = toupper(text[i]);
        }
        printf("String em maiúsculas: %s\n", text);
    } else {
        
        for (i = 0; text[i] != '\0'; i++) {
            text[i] = tolower(text[i]);
        }
        printf("String em minúsculas: %s\n", text);
    }

    return 0;
}