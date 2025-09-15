#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// A struct armazena informações sobre um território, incluindo o nome, a cor do exército e o número de tropas
typedef struct {
    char nome[30];     // Nome do Território (máximo de 30 caracteres)
    char cor[10];      // Cor do Exército (máximo de 10 caracteres)
    int tropas;        // Número de Tropas (inteiro)
} Territorio;

int main() {
    Territorio territorios[5];  // Vetor de 5 elementos do tipo Territorio, para armazenar os dados dos territórios

    // Cadastro dos territórios
    printf("===== Cadastro dos 5 territórios iniciais do nosso mundo =====\n");
    for (int i = 0; i < 5; i++) {  // Laço para cadastrar 5 territórios
        printf("\n--- Cadastrando Território %d ---\n", i + 1);

        // Solicita o nome do território e armazena na struct
        printf("Nome do território: ");
        scanf(" %[^\n]", territorios[i].nome);  // Lê a linha inteira, permitindo espaços no nome

        // Solicita a cor do exército e armazena na struct
        printf("Cor do exército: ");
        scanf(" %s", territorios[i].cor);  // Lê uma string até o primeiro espaço

        // Solicita o número de tropas e armazena na struct
        printf("Número de tropas: ");
        scanf("%d", &territorios[i].tropas);  // Lê um número inteiro
    }

    // Exibição dos dados cadastrados
    printf("\n===== Territórios Cadastrados =====\n");
    for (int i = 0; i < 5; i++) {  // Laço para exibir os dados dos 5 territórios
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);  // Exibe o nome do território
        printf("Cor do exército: %s\n", territorios[i].cor);  // Exibe a cor do exército
        printf("Número de tropas: %d\n", territorios[i].tropas);  // Exibe o número de tropas
    }

    return 0;  // Fim do programa
}
