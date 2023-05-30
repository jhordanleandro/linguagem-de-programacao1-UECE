#include <stdio.h>

int main() {
    int idade, identificador, opiniao;
    int quantidadeRespostas10 = 0;
    int somaIdades = 0;
    int quantidadeOpiniao5OuMenos = 0;
    int idadeMaisVelha = 0;
    int identificadorMaisVelho = 0;
    int totalPessoas = 200;
    int identificadores[totalPessoas];

    for (int i = 0; i < totalPessoas; i++) {
        identificadores[i] = 0;
    }

    for (int i = 0; i < totalPessoas; i++) {
        printf("Pessoa %d:\n", i + 1);

        do {
            printf("Digite o identificador da pessoa (entre 1 e 200): ");
            scanf("%d", &identificador);
        } while (identificador < 1 || identificador > 200 || identificadores[identificador - 1] != 0);

        identificadores[identificador - 1] = 1;

        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);

        printf("Digite a opinião da pessoa em relação à peça (de 0 a 10): ");
        scanf("%d", &opiniao);

        if (opiniao == 10) {
            quantidadeRespostas10++;
        }

        somaIdades += idade;

        if (opiniao <= 5) {
            quantidadeOpiniao5OuMenos++;
        }

        if (idade > idadeMaisVelha) {
            idadeMaisVelha = idade;
            identificadorMaisVelho = identificador;
        }
    }

    float mediaIdades = (float) somaIdades / totalPessoas;
    float percentualOpiniao5OuMenos = (float) quantidadeOpiniao5OuMenos / totalPessoas * 100;

    printf("Quantidade de respostas 10: %d\n", quantidadeRespostas10);
    printf("Média de idade das pessoas: %.2f\n", mediaIdades);
    printf("Percentual de pessoas com opinião 5 ou menos: %.2f%%\n", percentualOpiniao5OuMenos);
    printf("Identificador da pessoa mais velha: %d\n", identificadorMaisVelho);

    return 0;
}
