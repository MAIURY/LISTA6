#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int digito (char ada[]){
    int i=0;

    if(ada[0]== '-'|| ada[0]== '+'){
        i++;
    }

    for (; ada[i] != '\0'; i++){
            if(ada[i] == '\n') break;
            if (!isdigit(ada[i]))
                return 0;
    }
    return i > 0;
}


int main() {
    char ada[100];
    int soma=0;

    printf("Digite 4 string de numeros inteiros: ");

    for (int i=0; i<4; i++){
        printf("string %d: ", i +1);
        fgets(ada,100,stdin);
    
        if (digito (ada)){
        soma += atoi(ada);
        }else{
            printf("Erro: '%s' não é um inteiro valido.\n", ada);
         return 1;
         }

    }

    printf("A soma das quatro strings é: %d\n", soma);

    return 0;

}