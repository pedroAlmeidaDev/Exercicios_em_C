#include<stdio.h>
#include<stdlib.h>

struct valor {
	int valor1;
	int valor2;
	int result;
}val;

main(){
	do{
	printf("Digite o primeiro valor:");
	scanf("%d",&val.valor1);
	
	printf("Digite o segundo valor:");
	scanf("%d",&val.valor2);
	
	if(val.valor2 == 0){
		printf("\nValor invalido!!");
	}else{
		val.result = val.valor1 / val.valor2;
		printf("\nO resultato da divisao e: %d\n",val.result);
	}
	
	}while(val.valor2 != 0);
	printf("\nDigite o primeiro valor:");
	scanf("%d",&val.valor1);
	printf("\nDigite o segundo valor:");
	scanf("%d",&val.valor2);
	if(val.valor2 == 0){
		printf("Valor invalido!!");
	}else{
		val.result = val.valor1 / val.valor2;
		printf("\nO resultato da divisao e: %d",val.result);
	}
}
