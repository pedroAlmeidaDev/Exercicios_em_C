#include<stdio.h>

struct mercadoria{
	int mercadorias;
	float valMercadoria;
	float mdEstoque;
	float valEstoque;
	
}merc;

main(){
	printf("\nDigite o total de mercadorias no estoque:");
	scanf("%d",&merc.mercadorias);
	printf("\nDigite o valor de cada mercadoria:");
	scanf("%f",&merc.valMercadoria);

	merc.valEstoque = merc.mercadorias * merc.valMercadoria;
	
	merc.mdEstoque = merc.valEstoque/2;
	
	printf("\nO valor do estoque: %.2f",merc.valEstoque);
	printf("\nA media do estoque: %.2f",merc.mdEstoque);
	
}
