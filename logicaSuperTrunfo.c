#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //Declaração das variáveis para as duas cartas
    char nome_pais01[50] = "Brasil", nome_pais02[50] = "Canada";
    int populacao01 = 1000, populacao02 = 2000, pontos_turismo01 = 200, pontos_turismo02 = 150;
    float area01 = 500.50, area02 = 300.30, pib01 = 5.1, pib02 = 3.2;
    float demografia01, demografia02;
    int opcao;

    // Calculo da Demografia da Carta 01
    demografia01 = populacao01 / area01;

    // Calculo da Demografia da Carta 02
    demografia02 =  populacao02 / area02;

    // Menu para escolha de item à ser comparado

    printf("Escolha qual item das cartas você quer comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turístico\n");
    printf("5 - Demografia\n");
    printf("Opção...:");
    scanf("%d", &opcao);

    // Apresentação do comparação de acordo com a escolha

    switch (opcao) {
        case 1:
            printf("Veja quem ganhou na comparação de População: \n");
            printf("População Carta 01 - %s: %d\n", nome_pais01, populacao01);
            printf("População Carta 02 - %s: %d\n", nome_pais02, populacao02);
    
            if (populacao01 > populacao02){
                printf("Carta 1 venceu!\n");
            } else if (populacao01 < populacao02)
            {
                printf("Carta 2 venceu!\n");
            }  else {
            printf("As cartas empataram!\n");  
            }
            break;
        case 2:
            printf("Veja quem ganhou na comparação da Área: \n");
            printf("Área Carta 01 - %s: %2f\n", nome_pais01, area01);
            printf("Área Carta 02 - %s: %2f\n", nome_pais02, area02);

            if (area01 > area02){
                printf("Carta 1 venceu!\n");
            } else if (area01 < area02)
            {
                printf("Carta 2 venceu!\n");
            }  else {
            printf("As cartas empataram!\n");  
            }
            break;
        case 3:
            printf("Veja quem ganhou na comparação do PIB: \n");
            printf("PIB Carta 01 - %s: %2f\n", nome_pais01, pib01);
            printf("PIB Carta 02 - %s: %2f\n", nome_pais02, pib02);

            if (pib01 > pib02){
                printf("Carta 1 venceu!\n");
            } else if (pib01 < pib02)
            {
                printf("Carta 2 venceu!\n");
            }  else {
            printf("As cartas empataram!\n");  
            }
            break;
        case 4:
            printf("Veja quem ganhou na comparação dos Pontos Turisticos: \n");
            printf("Pontos Turísticos Carta 01 - %s: %d\n", nome_pais01, pontos_turismo01);
            printf("Pontos Turisticos Carta 02 - %s: %d\n", nome_pais02, pontos_turismo02);

            if (pontos_turismo01 > pontos_turismo02){
                printf("Carta 1 venceu!\n");
            } else if (pontos_turismo01 < pontos_turismo02)
            {
                printf("Carta 2 venceu!\n");
            }  else {
            printf("As cartas empataram!\n");  
            }
            break;            
        case 5:
            printf("Veja quem ganhou na comparação da Densidade Demográfica: \n");
            printf("Densidade Demográfica Carta 01 - %s: %2f\n", nome_pais01, demografia01);
            printf("Densidade Demográfica Carta 02 - %s: %2f\n", nome_pais02, demografia02);

            if (demografia01 > demografia02){
                printf("Carta 1 venceu!\n");
            } else if (demografia01 < demografia02)
            {
                printf("Carta 2 venceu!\n");
            }  else {
            printf("As cartas empataram!\n");  
            }
            break;
        default:
          printf("Opção inválida. Tente novamente.\n");
      }
    

    return 0;
}
