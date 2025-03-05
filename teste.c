#include <stdio.h>
int main(){

  char Estado[3];
  int Codigo;
  int populaçao;
  float Area;
  float Pib;
  int Pontosturisticos;

printf("Digite Estado: \n");
scanf("%s", &Estado);

printf("Qual é o Codigo: \n");
scanf("%d", &Codigo);

printf("Digite a populaçao:\n");
scanf("%d", &populaçao);

printf("Qual é a Area: \n");
scanf("%f", &Area);

printf("Qual é o seu Pib: \n");
scanf("%f",&Pib);

printf("Quantos Pontosturisticos: \n");
scanf("%d",&Pontosturisticos);

printf("Estado: %s\n Codigo: %d\n populaçao: %d\n", Estado, Codigo, populaçao);
printf("Area: %f Km²\n Pib: %f \n Pontosturisticos:  %d\n ", Area, Pib, Pontosturisticos);

return 0;


}