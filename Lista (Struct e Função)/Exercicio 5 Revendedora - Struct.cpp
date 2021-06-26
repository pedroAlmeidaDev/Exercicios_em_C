#include<stdio.h>
#include<stdlib.h>

struct Revendedora{
	float salario = 1200,vendas,comissao,total;
	int qtdCarro;
}revend;

main(){
	
	printf("Digite a quantidade de carros vendidos:\n");
	scanf("%d",&revend.qtdCarro);
	
	printf("Digite o valor das vendas:");
	scanf("%f",&revend.vendas);
	
	revend.comissao = revend.vendas*0.10;
	revend.total = revend.salario+revend.comissao+(revend.comissao*0.5);
	
	system("cls");
	
	printf("\nTotal de carros vendidos:%d\n",revend.qtdCarro);
	printf("\nTotal das vendas dos carros:%.2f\n",revend.vendas);
	printf("\nTotal da comissao:%.2f\n",revend.comissao);
	printf("\nTotal do salario:%.2f\n",revend.total);
}

