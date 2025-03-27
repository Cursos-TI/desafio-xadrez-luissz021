#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Torre: 5 casas, Bispo: 5 casas, Rainha: 8 casas
    int torre, bispo, rainha, opcao, direcao, qtde;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    do
    {
        printf("\nSimulação de movimentação de peças de xadrez\n");
        printf("Escolha uma peça para se mover:\n1. Torre\n2. Bispo\n3. Rainha\n4. Sair\n");
        printf("-> ");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            printf("\nPeça 'Torre' selecionada\n");
            printf("Selecione a direção que a peça deve percorrer\n1. Cima\n2. Baixo\n3. Esquerda\n4. Direita\n");
            printf("-> ");
            scanf("%d", &direcao);
            printf("\nQuantas vezes a peça deve ser movida ? (valor menor que 6): ");
            scanf("%d", &qtde);
            printf("\n");
            if (direcao == 1){
                if (qtde <= 5){
                    for(torre = 1; torre <= qtde; torre++){
                        printf("Cima\n");
                    }
                } else{
                    printf("Valor inválido! Vamos tentar de novo.\n");
                }
            } else if(direcao == 2){
                if (qtde <= 5){
                    for(torre = 1; torre <= qtde; torre++){
                        printf("Baixo\n");
                    }
                } else{
                    printf("Valor inválido! Vamos tentar de novo.\n");
                }
            } else if(direcao == 3){
                if (qtde <= 5){
                    for(torre = 1; torre <= qtde; torre++){
                        printf("Esquerda\n");
                    }
                } else{
                    printf("Valor inválido! Vamos tentar de novo.\n");
                }
            } else if(direcao == 4){
                if (qtde <= 5){
                    for(torre = 1; torre <= qtde; torre++){
                        printf("Direita\n");
                    }
                } else{
                    printf("Valor inválido! Vamos tentar de novo.\n");
                }
            } else {
                printf("\nA direção da peça está inválida! Tente novamente.\n");
            }
        break;
        case 2:
            printf("\nPerça 'Bispo' selecionada\n");
            printf("Selecione a direção que a peça deve percorrer\n1. Cima, Esquerda\n2. Cima, Direita\n3. Baixo, Esquerda\n4. Baixo, Direita\n");
            printf("-> ");
            scanf("%d", &direcao);
            printf("Quantas vezes a peça deve ser movida ? (valor menor que 6): ");
            scanf("%d", &qtde);
            printf("\n");
            if (direcao == 1){
                if (qtde <= 5){
                    for(bispo = 1; bispo <= qtde; bispo++){
                        printf("Cima, Esquerda\n");
                    }
                } else{
                    printf("Valor inválido! Vamos tentar de novo.\n");
                }
            } else if(direcao == 2){
                if (qtde <= 5){
                    for(bispo = 1; bispo <= qtde; bispo++){
                        printf("Cima, Direita\n");
                    }
                } else{
                    printf("Valor inválido! Vamos tentar de novo.\n");
                }
            } else if(direcao == 3){
                if (qtde <= 5){
                    for(bispo = 1; bispo <= qtde; bispo++){
                        printf("Baixo, Esquerda\n");
                    }
                } else{
                    printf("Valor inválido! Vamos tentar de novo.\n");
                }
            } else if(direcao == 4){
                if (qtde <= 5){
                    for(bispo = 1; bispo <= qtde; bispo++){
                        printf("Baixo, Direita\n");
                    }
                } else{
                    printf("Valor inválido! Vamos tentar de novo.\n");
                }
            } else {
                printf("\nA direção da peça está inválida! Tente novamente.\n");
            }
        break;
        case 3:
            printf("\nPeça 'Rainha selecionada'\n");
            printf("Selecione a direção que a peça deve percorrer\n1. Cima\n2. Baixo\n3. Direita\n4. Esquerda\n");
            printf("-> ");
            scanf("%d", &direcao);
            printf("Quantas vezes a peça deve ser movida ? (valor menor que 9): ");
            scanf("%d", &qtde);
            printf("\n");
            if (direcao == 1){
                if (qtde <= 8){
                    for(rainha = 1; rainha <= qtde; rainha++){
                        printf("Cima\n");
                    }
                } else{
                    printf("Valor inválido! Vamos tentar de novo.\n");
                }
            } else if(direcao == 2){
                if (qtde <= 8){
                    for(rainha = 1; rainha <= qtde; rainha++){
                        printf("Baixo\n");
                    }
                } else{
                    printf("Valor inválido! Vamos tentar de novo.\n");
                }
            } else if(direcao == 3){
                if (qtde <= 8){
                    for(rainha = 1; rainha <= qtde; rainha++){
                        printf("Direita\n");
                    }
                } else{
                    printf("Valor inválido! Vamos tentar de novo.\n");
                }
            } else if(direcao == 4){
                if (qtde <= 8){
                    for(rainha = 1; rainha <= qtde; rainha++){
                        printf("Esquerda\n");
                    }
                } else{
                    printf("Valor inválido! Vamos tentar de novo.\n");
                }
            } else {
                printf("\nA direção da peça está inválida! Tente novamente.\n");
            }
        break;
        case 4:
            printf("\nSaindo.....\n");
        default:
            printf("\nOpção inválida! Vamos tentar de novo.\n");
        break;
        }
    } while (opcao != 4);
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
