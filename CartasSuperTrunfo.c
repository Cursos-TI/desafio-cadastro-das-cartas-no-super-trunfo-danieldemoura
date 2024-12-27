#include <stdio.h>
#include <string.h> // Importação para usar a função strcspn

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado, estado2;
    char codigoDaCarta[4], codigoDaCarta2[4];
    char nomeDaCidade[100], nomeDaCidade2[100];
    int populacao, populacao2; 
    float areaEmKM, areaEmKM2; 
    int pontosTuristicos, pontosTuristicos2;
    float PIB, PIB2;

    printf("=========== Bem-vindo ao jogo Super Trunfo ===========\n");
    printf("=========== Cadastrando a Primeira Carta =========\n\n");

    printf("Digite a primeira letra do estado: ");
    scanf(" %c", &estado);

    printf("Digite o código da carta: ");
    scanf("%s", &codigoDaCarta);
    getchar(); // Limpa o caractere de nova linha do buffer

    printf("Digite o nome da cidade: ");
    fgets(nomeDaCidade, sizeof(nomeDaCidade), stdin); 
    nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0'; // Removendo o caractere de nova linha do final da string

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área total da cidade em km²: ");
    scanf("%f", &areaEmKM);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("\n ***** Carta 1 cadastrada com sucesso ***** \n");

    printf("\n=========== Cadastrando a Segunda Carta ========= \n");
    printf("Informe os dados da segunda carta \n\n");

    printf("Digite a primeira letra do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", &codigoDaCarta2);
    getchar(); // Limpa o caractere de nova linha do buffer

    printf("Digite o nome da cidade: ");
    fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin); 
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = '\0'; // Removendo o caractere de nova linha do final da string

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área total da cidade em km²: ");
    scanf("%f", &areaEmKM2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("\n ***** Carta 2 cadastrada com sucesso ***** \n");

    // Exibi todas as informações da carta 1
    printf("\n############################\n");
    printf("Dados da Carta 1");
    printf("\n############################\n");

    printf("Estado: %c \n", estado);
    printf("Código da carta: %s \n", codigoDaCarta);
    printf("Nome da cidade: %s \n", nomeDaCidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", areaEmKM);
    printf("PIB: %f \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos);


        // Exibi todas as informações da carta 2
    printf("\n############################\n");
    printf("Dados da Carta 2");
    printf("\n############################\n");
    
    printf("Estado: %c \n", estado2);
    printf("Código da carta: %s \n", codigoDaCarta2);
    printf("Nome da cidade: %s \n", nomeDaCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", areaEmKM2);
    printf("PIB: %f \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);

    return 0;
}
