#include <stdio.h>
#include <stdlib.h>

// Autor: Jo�o

int main() {
    int num1, num2, soma, subtracao, multi;
    float div;

    printf("=== Calculadora 2.0 ===\n\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Opera��es
    soma = num1 + num2;
    subtracao = num1 - num2;
    multi = num1 * num2;

    // Verificar se o segundo n�mero � zero antes da divis�o
    if (num2 != 0) {
        div = (float) num1 / num2;
        printf("\nResultados:\n");
        printf("Soma: %d\n", soma);
        printf("Subtracaoo: %d\n", subtracao);
        printf("Multiplicacao: %d\n", multi);
        printf("Divisao: %.2f\n", div);
    } else {
        printf("\nResultados:\n");
        printf("Soma: %d\n", soma);
        printf("Subtracao: %d\n", subtracao);
        printf("Multiplicacao: %d\n", multi);
        printf("Divisao: Indefinida (nao e possivel dividir por zero)\n");
    }

    return 0;
}

