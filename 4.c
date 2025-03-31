#include <stdio.h>

int main() {
    char nome[50]; // Variável para armazenar o nome do usuário

    // Solicitando o nome do usuário
    printf("Digite seu nome: ");
    scanf("%s", nome);

    // Inicializando o contador
    int i = 1;

    // Loop para escrever o nome 10 vezes usando while
    while (i <= 10) {
        printf("%d. %s\n", i, nome);
        i++;
    }

    return 0;
}
