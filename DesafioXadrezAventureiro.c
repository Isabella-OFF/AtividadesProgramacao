#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a direita
    printf("Movimento da Torre:\n");
    int i;
    for(i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo - 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    i = 0;
    while(i < 5) {
        printf("Cima Direita\n");  // Corrigido para representar o movimento diagonal
        i++;
    }

    // Movimento da Rainha - 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while(i < 8);

    // Movimento do Cavalo - 2 casas para baixo e 1 para a esquerda (formando um "L")
    printf("\nMovimento do Cavalo:\n");

    // Definindo as variáveis para o movimento do Cavalo
    int casasParaBaixo = 2;  // Cavalo move 2 casas para baixo
    int casasParaEsquerda = 1;  // Cavalo move 1 casa para a esquerda

    // Loop principal para o número de movimentos
    for(i = 0; i < casasParaBaixo; i++) {
        printf("Baixo\n");  // Imprime "Baixo" a cada movimento para baixo
    }

    // Segundo loop aninhado: Usando um loop `while` para mover o Cavalo para a esquerda
    int j = 0; // Variável para o loop `while`
    while(j < casasParaEsquerda) {
        printf("Esquerda\n");  // Imprime "Esquerda" após mover para baixo
        j++;
    }

    return 0;
}
