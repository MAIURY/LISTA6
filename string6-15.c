#include <stdio.h>

int main() {
    char nomes[3][50];  
    char temp[50];      
    int i, j;

    
    printf("Digite três nomes:\n");
    for (i = 0; i < 3; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }


    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            if (nomes[i][0] > nomes[j][0]) {         
                for (int k = 0; k < 50; k++) {
                    temp[k] = nomes[i][k];
                    nomes[i][k] = nomes[j][k];
                    nomes[j][k] = temp[k];
                }
            }
        }
    }

    
    printf("\nNomes em ordem alfabética:\n");
    for (i = 0; i < 3; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
