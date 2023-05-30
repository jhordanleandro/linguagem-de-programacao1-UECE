#include <stdio.h>

int main() {
    int id;
    float valor, percentual, novoValor;
    int quantidadeProdutosCaros = 0;
    float somaValoresSemAumento = 0.0;
    int quantidadeProdutosSemAumento = 0;
    float valorProdutoMaisCaro = 0.0;

    while (1) {
        printf("Digite o ID do produto (ou zero para sair): ");
        scanf("%d", &id);

        if (id == 0) {
            break;
        }

        printf("Digite o valor do produto: ");
        scanf("%f", &valor);

        printf("Digite o percentual de aumento do produto: ");
        scanf("%f", &percentual);

        novoValor = valor + (valor * percentual / 100);

        printf("Novo valor do produto: %.2f\n", novoValor);

        if (novoValor > 100.0 && percentual > 5.0) {
            quantidadeProdutosCaros++;
        }

        if (percentual == 0.0) {
            somaValoresSemAumento += valor;
            quantidadeProdutosSemAumento++;
        }

        if (novoValor > valorProdutoMaisCaro) {
            valorProdutoMaisCaro = novoValor;
        }
    }

    printf("Quantidade de produtos mais caros que R$ 100,00 e com aumento superior a 5%%: %d\n", quantidadeProdutosCaros);

    if (quantidadeProdutosSemAumento > 0) {
        float mediaValoresSemAumento = somaValoresSemAumento / quantidadeProdutosSemAumento;
        printf("Média de valor dos produtos sem aumento: %.2f\n", mediaValoresSemAumento);
    } else {
        printf("Nenhum produto sem aumento.\n");
    }

    printf("Valor do produto mais caro: %.2f\n", valorProdutoMaisCaro);

    return 0;
}
