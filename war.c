#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
typedef struct {
    char nome[30];     // Nome do Território
    char cor[10];      // Cor do Exército
    int tropas;        // Número de Tropas
} Territorio;

int main() {
    Territorio territorios[5];  // Vetor com 5 territórios

    // Cadastro dos territórios
    printf("===== Cadastro dos 5 territórios iniciais do nosso mundo =====\n");
    for (int i = 0; i < 5; i++) {
        printf("\n--- Cadastrando Território %d ---\n", i + 1);

        // Nome do território
        printf("Nome do território: ");
        scanf(" %[^\n]", territorios[i].nome);

        // Cor do exército
        printf("Cor do exército: ");
        scanf(" %s", territorios[i].cor);

        // Número de tropas
        printf("Número de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados
    printf("\n===== Territórios Cadastrados =====\n");
    for (int i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Número de tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
