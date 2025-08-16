#include <stdio.h>

int main(){

char estado1 [50], estado2 [50];
char código1 [50], código2 [50]; 
char nome1 [50], nome2 [50];
int população1, população2; 
float area1, area2;
float pib1, pib2;
int pontos1, pontos2; 
float densidade1, densidade2;
float percapita1, percapita2;
float divisao1, divisao2, divisao3, divisao4;

    printf("Carta 1\n");

    printf("Digite o estado:\n");
    scanf("%s", estado1);
    
    printf("Digite o código da carta:\n");
    scanf("%s", código1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome1);

    printf("Digite a população da cidade:\n"); 
    scanf("%d", &população1);

    printf("Digite a quatidade de pontos turísticos:\n");
    scanf("%d", &pontos1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a área:\n");
    scanf("%f", &area1);

    divisao1 = (float) população1/area1;

    divisao2 = (float) pib1/população1;

    printf("\n");
        
    printf("Carta 2\n");

    printf("Digite o estado:\n");
    scanf("%s", estado2);
    
    printf("Digite o código da carta:\n");
    scanf("%s", código2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome2);

    printf("Digite a população da cidade:\n"); 
    scanf("%d", &população2);

    printf("Digite a quatidade de pontos turísticos:\n");
    scanf("%d", &pontos2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a área:\n");
    scanf("%f", &area2); 

    divisao3 = (float) população2/area2;

    divisao4 = (float) pib2/população2;

    printf("\n"); 



    printf("Carta 1\n");
    printf("Estado: %s \n Código da carta: %s \n Nome da cidade: %s \n", estado1, código1, nome1);
    printf("População: %d \n Pontos turísticos: %d \n PIB: %.2f bilhões \n Área: %.2f Km² \n", população1, pontos1, pib1, area1);
    printf ("A densidade populacional é: %.2f hab/Km²\n", divisao1);
    printf ("O PIB per capita  é: R$ %.2f \n", divisao2);
    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %s \n Código da carta: %s \n Nome da cidade: %s \n", estado2, código2, nome2);
    printf("População: %d \n Pontos turísticos: %d \n PIB: %.2f bilhões \n Área: %.2f Km² \n", população2, pontos2, pib2, area2);
    printf ("A densidade populacional é: %.2f hab/Km²\n", divisao3);
    printf ("O PIB per capita  é: R$ %.2f\n", divisao4);

    return 0;

}
