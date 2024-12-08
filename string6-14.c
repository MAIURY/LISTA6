#include <stdio.h>

int main() {
    int dia, mes, ano;
    int dias_no_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char meses[12][10] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    
    printf("Digite o dia, mês e ano (separados por espaço): ");
    scanf("%d %d %d", &dia, &mes, &ano);


    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        dias_no_mes[1] = 29;
    }

    
    if (ano < 0 || mes < 1 || mes > 12 || dia < 1 || dia > dias_no_mes[mes - 1]) {
        printf("Data inválida.\n");
        return 1;
    }

    
    if (dia == 1) {
        printf("Primeiro de ");
    } else {
        printf("%d de ", dia);
    }

    
    for (int i = 0; i < 12; i++) {
        if (mes == i + 1) {
            for (int j = 0; meses[i][j] != '\0'; j++) {
                putchar(meses[i][j]);
            }
            break;
        }
    }
    printf(" de ");

    /
    int milhar = ano / 1000;
    int centena = (ano % 1000) / 100;
    int dezena = (ano % 100) / 10;
    int unidade = ano % 10;

    
    if (milhar == 1) {
        printf("Mil");
    } else {
        printf("%d Mil", milhar);
    }

    
    if (centena > 0) {
        printf(" %dcentos", centena);
    }

    if (dezena > 0 || unidade > 0) {
        if (dezena == 1 && unidade > 0) { 
            printf(" e %d", 10 + unidade);
        } else {
            if (dezena > 1) {
                printf(" e %d", dezena * 10);
            }
            if (unidade > 0) {
                printf(" e %d", unidade);
            }
        }
    }

    printf(".\n");
    return 0;
}
