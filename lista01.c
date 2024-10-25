#include <stdio.h>

int main() {
    // Declaração de variáveis
    int num1, num2, soma;

    // Entrada
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Processamento
    soma = num1 + num2;

    // Saída
    printf("A soma dos dois números é: %d\n", soma);

    return 0;
}

