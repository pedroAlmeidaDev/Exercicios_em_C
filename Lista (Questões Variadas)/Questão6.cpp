#include<stdio.h>
#include<stdlib.h>

struct zero{
	int num1;
	int num2;
	int resultado;
}zer;

main(){
	printf("\nDigite o primeiro valor:");
	scanf("%d",&zer.num1);
	printf("\nDigite o segundo valor:");
	scanf("%d",&zer.num2);
	
	while(zer.num2 == 0){
		printf("\n!Numero negado!\n");
		printf("\nDigite o segundo valor:");
		scanf("%d",&zer.num2);
	}
	zer.resultado = zer.num1/zer.num2;
	printf("\nO resultado da divisao do numero %d e numero: %d e: %d ",zer.num1,zer.num2,zer.resultado);
}
