#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //Declaração das variáveis para as duas cartas
    char estado01 = "A", estado02 = "B";
    char codigo_carta01[4] = "A01", codigo_carta02[4] = "B04";
    char nome_cidade01[50] = "Rio de Janeiro", nome_cidade02[50] = "São Paulo";
    int populacao01 = 100, populacao02 = 200, pontos_turismo01 = 200, pontos_turismo02 = 150;
    float area01 = 100.10, area02 = 200.50, pib01 = 5.1, pib02 = 3.2;
    float demografia01, demografia02, rendacapita01, rendacapita02, super01, super02;
    
    // Calculo da Demografia da Carta 01
    demografia01 = populacao01 / area01;

    // Calculo da Renda per Capita da Carta 01
    rendacapita01 = (pib01 * 1000000000) / populacao01;
    
    // Calculando super poder da Carta 01
    super01 = populacao01 + area01 + pib01 + pontos_turismo01 + demografia01 + rendacapita01;

    // Calculo da Demografia da Carta 02
    demografia02 =  populacao02 / area02;

    // Calculo da Renda per Capita da Carta 01
    rendacapita02 = (pib02 * 1000000000) / populacao02;

    // Calculando super poder da Carta 01
    super02 = populacao02 + area02 + pib02 + pontos_turismo02 + demografia02 + rendacapita02;

    // Comparando os valores das cartas e apresentando ganhador

    printf("Veja quem ganhou na comparação de População: \n");
    printf("População Carta 01 %s: %d\n", nome_cidade01, populacao01);
    printf("População Carta 02 %s: %d\n", nome_cidade02, populacao02);

    if (populacao01 > populacao02){
        printf("Carta 1 venceu!\n");
    } else if (populacao01 < populacao02)
    {
        printf("Carta 2 venceu!\n");
    }  else {
       printf("As cartas empataram!\n");  
    }

    

    return 0;
}
