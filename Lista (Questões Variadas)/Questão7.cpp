#include<stdio.h>

struct soma40{
	int numero;
	int i;
	int somai;
	int soma;
}som;

main(){
	for(som.i=0;som.i<=39;som.i++){
		printf("\nDigite um numero:");
		scanf("%d",&som.numero);
		if(som.numero < 40){
			som.somai = som.somai + som.numero;
		}else{
			printf("\nNao somar!");
		}
	}
	printf("\nA soma dos numeros e: %d",som.somai);
}
