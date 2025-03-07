#include <stdio.h>

int main(){

    char Estado1[50], Estado2[50];
    int Codigo1, Codigo2;
    char Cidade1[50], Cidade2[50];
    int Populaçao1, Populaçao2;
    float Area1, Area2;
    float Pib1, Pib2;
    int Pontoturistico1, Pontoturistico2;

    printf("Digite o Estado:\n");
    scanf("%s", Estado1);

    printf("Digite o Estado: \n");
    scanf("%s", Estado2);

    printf("Codigo: \n");
    scanf("%d", &Codigo1);

    printf("Codigo: \n");
    scanf("%d", &Codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", Cidade1);

    printf("Nome da cidade: \n");
    scanf("%s", Cidade2);

    printf("Populaçao: \n");
    scanf("%d", &Populaçao1);

    printf("Populaçao: \n");
    scanf("%d", &Populaçao2);

    printf("Area: \n");
    scanf("%f", &Area1);

    printf("Area: \n");
    scanf("%f", &Area2);

    printf("Pib: \n");
    scanf("%f", &Pib1);

    printf("Pib: \n");
    scanf("%f", &Pib2);

    printf("Ponto turistico: \n");
    scanf("%d", &Pontoturistico1);

    printf("Ponto turistico: \n");
    scanf("%d", &Pontoturistico2);

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n Codigo: %d\n Cidade: %s\n Populaçao: %d\n", Estado1, Codigo1, Cidade1, Populaçao1);
    printf("Area: %fKm²\n Pib: %.2fMilhoes de Reais\n Pontoturisticos: %d\n", Area1, Pib1, Pontoturistico1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n Codigo: %d\n Cidade: %s\n Populaçao: %d\n", Estado2, Codigo2, Cidade2, Populaçao2);
    printf("Area: %fKm²\n Pib: %.2fMilhoes de Reais\n Pontoturisticos: %d\n", Area2, Pib2, Pontoturistico2);

    return 0;


}
