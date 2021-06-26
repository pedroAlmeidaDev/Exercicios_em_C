//Calcule a area de um losango

#include<stdio.h>
#include<stdlib.h>

struct Losango{
	float areaMaior,areaMenor,areaTotal;
	
}los;

main(){
	
	printf("Digite a area da diagonal maior:");
	scanf("%f",&los.areaMaior);
	printf("Digite a area da diagonal menor:");
	scanf("%f",&los.areaMenor);
	
	los.areaTotal = (los.areaMaior*los.areaMenor)/2;
	
	printf("\nA area do losango e: %.2f",los.areaTotal);
}
