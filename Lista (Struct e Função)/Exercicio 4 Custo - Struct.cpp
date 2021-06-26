#include<stdio.h>
#include<stdlib.h>

struct Custo{
	float carro,imposto,distribuidora,total;
	
}cust;

main(){
	printf("Digite o valor do carro:");
	scanf("%f",&cust.carro);
	
	cust.imposto = (cust.carro*0.45);
	cust.distribuidora = (cust.carro*0.28);
	cust.total = cust.carro + cust.imposto + cust.distribuidora;
	
	system("cls");
	
	printf("\nO valor do carro:%.2f\n",cust.carro);
	printf("O valor do imposto:%.2f\n",cust.imposto);
	printf("O valor do imposto da distribuidora:%.2f\n",cust.distribuidora);
	printf("Valor final do carro:%.2f\n",cust.total);
}
