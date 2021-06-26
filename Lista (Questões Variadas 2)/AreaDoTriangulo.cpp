//Criar um algoritmo que calcule e imprima a área de um triângulo
#include <stdio.h>
#include <stdlib.h>

struct triangulo{
	float area1=0;
	float area2=0;
	float areaTotal=0;
}triang;

main(){
	printf("Digite o valor da base:");
	scanf("%f",&triang.area1);
	printf("Digite o valor da altura:");
	scanf("%f",&triang.area2);
	triang.areaTotal=(triang.area1*triang.area2)/2;
	printf("\nO valor da area do triangulo e igual a: %.2f\n",triang.areaTotal);
}

