#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char cor[100];

    printf("Digite uma cor: ");
    gets(cor); 
    printf("Você digitou: %s\n", cor);

    return 0;
}
