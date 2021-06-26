#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Estoque{
	char produto[30];
	int qtdAtual;
	int qtdMaxima;
	int qtdMinima;
	int qtdMedia;
}estoq;

main(){
	printf("Digite o nome do produto:");
	scanf("%s",&estoq.produto);
	printf("\nDigite a quantidade atual em estoque:\n");
	scanf("%d",&estoq.qtdAtual);
	printf("\nDigite a quantidade maxima:\n");
	scanf("%d",&estoq.qtdMaxima);
	printf("\nDigite a quantidade minima:\n");
	scanf("%d",&estoq.qtdMinima);
	
	estoq.qtdMedia = (estoq.qtdMaxima + estoq.qtdMinima)/2;
	
	if(estoq.qtdAtual >= estoq.qtdMedia){
		printf("Nao efetuar compra!!");
	}else{
		printf("Efetuar compra!!");
	}
}
