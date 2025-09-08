#include <stdio.h>
#include <string.h>

typedef struct {
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int turismo;
} Carta;

int main() {
    Carta cartas[] = {
        {"A01", "Ceara",    9268836, 148894.442, 4.18, 6},
        {"B01", "Amazonas", 4281209, 1571000.0,  9.86, 10}
    };
    int num_cartas = sizeof(cartas)/sizeof(cartas[0]);

    char estado;
    printf("\nEstado (A para Ceara, B para Amazonas): ");
    scanf(" %c", &estado); // espaço antes do %c para ignorar '\n'

    int encontrada = 0;
    for (int i = 0; i < num_cartas; i++) {
        if ((estado == 'A' && strcmp(cartas[i].codigo, "A01") == 0) ||
            (estado == 'B' && strcmp(cartas[i].codigo, "B01") == 0)) {
            printf("\nCARTA %d\n", i+1);
            printf("Codigo: %s\n", cartas[i].codigo);
            printf("Nome Cidade: %s\n", cartas[i].nome);
            printf("População: %d\n", cartas[i].populacao);
            printf("Área: %.3f km²\n", cartas[i].area);
            printf("PIB: %.2f%%\n", cartas[i].pib);
            printf("Número de Pontos Turísticos: %d\n", cartas[i].turismo);
            encontrada = 1;
            break;
        }
    }
    if (!encontrada) {
        printf("CARTA NÃO EXISTE\n");
    }
    return 0;
}