#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char palavra1[MAX], palavra2[MAX];
    int i, j, k, iguais = 1, substring = 0;
    int len1 = 0, len2 = 0;


    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);


    for (i = 0; palavra1[i] != '\0'; i++) {
        len1++;
    }
    for (i = 0; palavra2[i] != '\0'; i++) {
        len2++;
    }


    if (len1 == len2) {
        for (i = 0; i < len1; i++) {
            if (palavra1[i] != palavra2[i]) {
                iguais = 0;
                break;
            }
        }
    } else {
        iguais = 0;
    }

    if (iguais) {
        printf("As palavras são iguais.\n");
    } else {
        
        if (len1 > len2) {
            printf("A primeira palavra é maior.\n");
        } else if (len2 > len1) {
            printf("A segunda palavra é maior.\n");
        } else {
            printf("As palavras têm o mesmo tamanho, mas são diferentes.\n");
        }

        for (i = 0; i <= len1 - len2; i++) {
            int match = 1;
            for (j = 0; j < len2; j++) {
                if (palavra1[i + j] != palavra2[j]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                substring = 1;
                break;
            }
        }

        if (substring) {
            printf("A segunda palavra é uma substring da primeira.\n");
        } else {
            printf("A segunda palavra NÃO é uma substring da primeira.\n");
        }
    }

    return 0;
}
