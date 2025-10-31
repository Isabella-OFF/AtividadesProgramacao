#include <stdio.h>

// Função recursiva para o movimento da Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // Recursivamente chama a função para o próximo movimento
}

// Função recursiva para o movimento do Bispo (5 casas na diagonal para cima e à direita)
void moverBispo(int casas) {
    if (casas <= 0) return;

    // Movimento diagonal: Cima e Direita
    printf("Cima\n");
    printf("Direita\n");

    moverBispo(casas - 1); // Recursão para o próximo movimento
}

// Função recursiva para o movimento da Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1); // Recursivamente chama a função para o próximo movimento
}

// Função para o movimento do Cavalo (2 casas para cima e 1 para a direita, formando um "L")
void moverCavalo() {
    // O Cavalo move 2 casas para cima e 1 para a direita (formando um "L")

    // Loop para simular o movimento do Cavalo
    for (int i = 0; i < 2; i++) {
        printf("Cima\n"); // Mover para cima

        // Após a segunda iteração, o Cavalo vai para a direita
        if (i == 1) {
            break;  // Interrompe o loop e faz o Cavalo mover para a direita
        }

        // Caso contrário, o Cavalo ainda está subindo (continua o loop)
        continue; // Move para a próxima iteração sem executar a linha abaixo
    }

    printf("Direita\n"); // Mover para a direita
}

int main() {
    // Movimento da Torre - 5 casas para a direita
    printf("Movimento da Torre:\n");
    moverTorre(5); // Chama a função recursiva para mover a Torre 5 casas para a direita
    printf("\n");

    // Movimento do Bispo - 5 casas na diagonal para cima e à direita
    printf("Movimento do Bispo:\n");
    moverBispo(5); // Chama a função recursiva para mover o Bispo 5 casas na diagonal
    printf("\n");

    // Movimento da Rainha - 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    moverRainha(8); // Chama a função recursiva para mover a Rainha 8 casas para a esquerda
    printf("\n");

    // Movimento do Cavalo - 2 casas para cima e 1 para a direita (formando um "L")
    printf("Movimento do Cavalo:\n");
    moverCavalo(); // Chama a função para mover o Cavalo 2 casas para cima e 1 para a direita
    printf("\n");

    return 0;
}


