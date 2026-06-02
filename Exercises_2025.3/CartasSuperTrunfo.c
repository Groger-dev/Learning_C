#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado_A[50], estado_B[50], codigo1[10], codigo2[10], cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int turismo1, turismo2, resultadoPop, resultadoTur, resultadoAr, resultadoPIB, resultadoDens, resultadoPcap, resultadoSp;
    float area1, area2, PIB1, PIB2, densipop1, densipop2, pibcap1, pibcap2, superpoder1, superpoder2;
    

    //Cadastro da primeira carta
    printf("Insira o nome do estado: ");
    scanf(" %50[^\n]", estado_A); //Ajuste para nomes compostos

    printf("Insira o código da carta: ");
    scanf(" %s", codigo1);

    printf("Insira o nome de uma cidade pentencente a %s: ", estado_A);
    scanf(" %50[^\n]", cidade1);

    printf("Qual é a população de %s? ", cidade1);
    scanf(" %lu", &populacao1);

    printf("Qual é a área de %s em km²? ", cidade1);
    scanf(" %f", &area1);

    printf("Qual é o PIB de %s? ", cidade1);
    scanf(" %f", &PIB1);

    printf("Quantos pontos turísticos existem em %s? ", cidade1);
    scanf(" %d", &turismo1);

    densipop1 = populacao1 / area1;

    pibcap1 = PIB1 / populacao1;

    superpoder1 = (float) populacao1 + turismo1 + area1 + PIB1 + pibcap1 + (area1 / populacao1);


    //Impressão da primeira carta
    printf("Carta cadastrada com sucesso!\n");

    
    printf("Estado: %s\n", estado_A);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População de %s: %lu\n", cidade1, populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", turismo1);
    printf("Densidade populacional: %.2f hab/km²\n", densipop1);
    printf("PIB per capita: %.2f reais\n", pibcap1);


    //Cadastro da segunda carta
    printf("Insira o nome do estado: ");
    scanf(" %50[^\n]", estado_B);

    printf("Insira o código da carta: ");
    scanf(" %s", codigo2);

    printf("Insira o nome de uma cidade pertencente a %s: ", estado_B);
    scanf(" %50[^\n]", cidade2);

    printf("Qual é a população de %s? ", cidade2);
    scanf(" %lu", &populacao2);

    printf("Qual é a área de %s em km²? ", cidade2);
    scanf(" %f", &area2);

    printf("Qual é o PIB de %s? ", cidade2);
    scanf(" %f", &PIB2);

    printf("Quantos pontos turísticos existem em %s? ", cidade2);
    scanf(" %d", &turismo2);

    densipop2 = populacao2 / area2;

    pibcap2 = PIB2 / populacao2;

    superpoder2 = (float) populacao2 + turismo2 + area2 + PIB2 + pibcap2 + (area2 / populacao2);
   
    //Impressão da segunda carta
    printf("Carta cadastrada com sucesso!\n");

    printf("Estado: %s\n", estado_B);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População de %s: %lu\n", cidade2, populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densipop2);
    printf("PIB per capita: %.2f reais\n", pibcap2);

    //Comparação entre as cartas e resultado da vencedora
    resultadoPop = populacao1 > populacao2;
    resultadoAr = area1 > area2;
    resultadoPIB = PIB1 > PIB2;
    resultadoTur = turismo1 > turismo2;
    resultadoDens = densipop1 > densipop2;
    resultadoPcap = pibcap1 > pibcap2;
    resultadoSp = superpoder1 > superpoder2; 


    //Comparação entre as cartas: resultado == 1 (primeira carta vence), resultado == 0 (segunda carta vence);
    printf("Resultado da disputa\n");
    printf("População: Carta ** venceu (%d)\n", resultadoPop);
    printf("Área: Carta ** venceu (%d)\n", resultadoAr);
    printf("PIB: Carta ** venceu (%d)\n", resultadoPIB);
    printf("Pontos Turísticos: Carta ** venceu (%d)\n", resultadoTur);
    printf("Densidade Populacional: Carta ** venceu (%d)\n", resultadoDens);
    printf("PIB per Capita: Carta ** venceu (%d)\n", resultadoPcap);
    printf("Super Poder: Carta ** venceu (%d)\n", resultadoSp);
    
    
        
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
