#include <stdio.h>

int main() {
    int inicio, fim, soma = 0;

    // Solicitando ao usuário o início e o fim do intervalo
    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o valor final do intervalo: ");
    scanf("%d", &fim);

    // Inicializando o contador
    int i = inicio;

    // Calculando o somatório dos números no intervalo com while
    while (i <= fim) {
        soma += i;
        i++;
    }

    // Exibindo o resultado
    printf("O somatório dos números de %d a %d é: %d\n", inicio, fim, soma);

    return 0;
}
