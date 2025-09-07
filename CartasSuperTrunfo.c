#include <stdio.h>
int main(){
    //CEARÁ COM 148 894,442 km² DE AREA
    //POPULAÇÃO EM 2025 9.268.836 habitantes 
    //VALOR DO PIB EM 2025 4,18%
    //6 PONTOS TURISTICOS
     
    //AMAZONAS COM 1.571.000 km² DE AREA
    //POPULAÇÃO EM 2025 4.281.209 milhões
    //VALOR DO PIB EM 2025 9,86% 
    //10 PONTOS TURISTICOS

    // "" ; : ''
    char estado, estado2;
    char codigo[3], condigo2[3];
    char nome_cidade[50], nome_cidade2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turismo, turismo2;

    char print_estado[10] = "Estado: ";
    char print_codigo[10] = "Codigo: ";
    char print_nome_cidade[20] = "Nome Cidade: ";
    char print_populacao[50] = "População: ";
    char print_area[50] = "Área: ";
    char print_pib[50] = "PIB: ";
    char print_turismo[50] = "Número de Pontos Turísticos: ";


    printf("CARTA 1\n");

    printf("\n%s", print_estado);
    scanf("%s", estado);

    codigo[3] = estado + "01";

    printf("\n%s", print_nome_cidade);
    scanf("%s", nome_cidade);

    printf("\n%s", print_populacao);
    scanf("%d", &populacao);


    printf("\n%s", print_area);
    scanf("%f", &area);

    printf("\n%s", print_pib);
    scanf("%f", &pib);

    printf("\n%s", print_turismo);
    scanf("%d", &turismo);
   
   
    







    return 0;
}
