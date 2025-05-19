#include <stdio.h>

#define BISPO 1
#define TORRE 2
#define RAINHA 3
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    int pecaSelecionada; 
    int contador = 0;

    printf("=== Desafio do Xadrez ===\n\n");
    printf("Escolha qual peça você quer movimentar:\n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("Digite o número da peça: ");
    scanf("%d", &pecaSelecionada); // Coleta a escolha do usuário

    printf("\n"); // Apenas para espaçamento na saída

    // Verifica a peça escolhida
    if (pecaSelecionada == BISPO) {
        printf("Você escolheu o Bispo. Movimentação:\n");
        
        // Loop com while
        while (contador < MOV_BISPO) {
            printf("Cima\n");
            printf("Direita\n"); // Bispo se move na diagonal superior direita
            contador++;
        }

    } else if (pecaSelecionada == TORRE) {
        printf("Você escolheu a Torre. Movimentação:\n");

        // Loop com for
        for (int i = 0; i < MOV_TORRE; i++) {
            printf("Direita\n");
        }

    } else if (pecaSelecionada == RAINHA) {
        printf("Você escolheu a Rainha. Movimentação:\n");

        contador = 0; // Reinicializa o contador para o do...while

        // Loop com do...while
        do {
            printf("Esquerda\n");
            contador++;
        } while (contador < MOV_RAINHA);

    } else {
        printf("Opção inválida. Por favor, reinicie o programa e escolha uma peça válida.\n");
    }

    return 0;
}
