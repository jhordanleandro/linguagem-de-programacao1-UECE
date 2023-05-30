#include <stdio.h>

#define TAMANHO_VETOR 10

int main() {
    float salarios[TAMANHO_VETOR];
    float maiorSalario = 0.0;

    printf("Digite os 10 salários:\n");

    // Leitura dos salários
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Salário %d: ", i + 1);
        scanf("%f", &salarios[i]);

        // Verificação do maior salário
        if (salarios[i] > maiorSalario) {
            maiorSalario = salarios[i];
        }
    }

    // Exibição do maior salário
    printf("O maior salário é: %.2f\n", maiorSalario);

    return 0;
}
