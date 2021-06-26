#include<stdio.h>
#include<stdlib.h>

FuncaoRevendedora(){
	float salario = 1200,vendas,comissao,total;
	int qtdCarro;
	
	printf("Digite a quantidade de carros vendidos:\n");
	scanf("%d",&qtdCarro);
	
	printf("Digite o valor das vendas:");
	scanf("%f",&vendas);
	
	comissao = vendas*0.10;
	total = salario+comissao+(comissao*0.5);
	
	system("cls");
	
	printf("\nTotal de carros vendidos:%d\n",qtdCarro);
	printf("\nTotal das vendas dos carros:%.2f\n",vendas);
	printf("\nTotal da comissao:%.2f\n",comissao);
	printf("\nTotal do salario:%.2f\n",total);
}

main(){
	FuncaoRevendedora();
	
}
