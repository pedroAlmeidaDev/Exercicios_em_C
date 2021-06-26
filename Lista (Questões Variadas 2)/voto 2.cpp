#include<stdio.h>
#include<stdlib.h>

struct Voto{
	int anoAtual = 2020;
	int anoDenascimento;
	int criterio;
	
}vot;

main(){
	printf("Insira seu ano de nascimento:");
	scanf("%d",&vot.anoDenascimento);
	
	vot.criterio = vot.anoAtual - vot.anoDenascimento;
	
	if(vot.criterio >= 16){
		printf("Apto para votar!!");
	}else{
		printf("voto nao autorizado!!");
	}
}
