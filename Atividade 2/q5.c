#include <stdio.h>

#define TAMANHO_VETOR 10

int main() {
    float salarios[TAMANHO_VETOR];
    float maiorSalario = 0.0;

    printf("Digite os 10 sal�rios:\n");

    // Leitura dos sal�rios
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Sal�rio %d: ", i + 1);
        scanf("%f", &salarios[i]);

        // Verifica��o do maior sal�rio
        if (salarios[i] > maiorSalario) {
            maiorSalario = salarios[i];
        }
    }

    // Exibi��o do maior sal�rio
    printf("O maior sal�rio �: %.2f\n", maiorSalario);

    return 0;
}
