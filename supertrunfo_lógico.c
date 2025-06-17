#include <stdio.h>

int main() {

    // Variáveis dos atributos de jogo
    int opcao;
    int resultado1 = 0, resultado2 = 0;
    int primeiroAtributo, segundoAtributo;

    // Atributos dos países BRASIL x AUSTRÁLIA
    int populacaoBrasil = 203000000, populacaoAustralia = 26000000;
    int areaBrasil = 8516000, areaAustralia = 7692000; // em km²
    long long pibBrasil = 2000000000000, pibAustralia = 1600000000000; // em dólares
    float densidadeBrasil = 25.0, densidadeAustralia = 3.4; // hab/km²

    // Menu principal
    printf("*** Comparação Brasil x Austrália ***\n");
    printf("1. Iniciar comparação\n");
    printf("2. Sair\n");
    scanf("%d", &opcao);

    // Caso a resposta seja diferente de 1, fecha o jogo pro jogador
    if (opcao != 1) {
        printf("Saindo...\n");
        return 0;
    }

    // Jogo iniciado. Primeiro atributo para o jogador inserir:
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade populacional (menor vence)\n");
    scanf("%d", &primeiroAtributo);

    // Condições para primeiro atributo
    switch (primeiroAtributo) {
        case 1:
            printf("Comparando População...\n");
            resultado1 = populacaoBrasil > populacaoAustralia ? 1 : 0;
            break;
        case 2:
            printf("Comparando Área...\n");
            resultado1 = areaBrasil > areaAustralia ? 1 : 0;
            break;
        case 3:
            printf("Comparando PIB...\n");
            resultado1 = pibBrasil > pibAustralia ? 1 : 0;
            break;
        case 4:
            printf("Comparando Densidade populacional...\n");
            resultado1 = densidadeBrasil < densidadeAustralia ? 1 : 0;
            break;
        default:
            printf("Atributo inválido.\n");
            return 0;
    }

    // Segundo Atributo para o jogador inserir:
    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade populacional\n");
    scanf("%d", &segundoAtributo);

    // Caso o primeiro e o segundo atributos digitados sejam iguais
    if (segundoAtributo == primeiroAtributo) {
        printf("Você escolheu o mesmo atributo duas vezes. Encerrando.\n");
        return 0;
    }

    // Condições para segundo atributo
    switch (segundoAtributo) {
        case 1:
            printf("Comparando População...\n");
            resultado2 = populacaoBrasil > populacaoAustralia ? 1 : 0;
            break;
        case 2:
            printf("Comparando Área...\n");
            resultado2 = areaBrasil > areaAustralia ? 1 : 0;
            break;
        case 3:
            printf("Comparando PIB...\n");
            resultado2 = pibBrasil > pibAustralia ? 1 : 0;
            break;
        case 4:
            printf("Comparando Densidade populacional...\n");
            resultado2 = densidadeBrasil < densidadeAustralia ? 1 : 0;
            break;
        default:
            printf("Atributo inválido.\n");
            return 0;
    }

    // Resultado final
    if (resultado1 && resultado2) {
        printf("O Brasil venceu nas duas comparações!\n");
    } else if (resultado1 || resultado2) {
        printf("Empate: cada país venceu em uma categoria.\n");
    } else {
        printf("A Austrália venceu nas duas comparações!\n");
    }

    return 0;
}
