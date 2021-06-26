#include<stdio.h>
#include<stdlib.h>

funcaoCusto(){
	float carro,imposto,distribuidora,total;
	
	printf("Digite o valor do carro:");
	scanf("%f",&carro);
	
	imposto = (carro*0.45);
	distribuidora = (carro*0.28);
	total = carro + imposto + distribuidora;
	
	system("cls");
	
	printf("\nO valor do carro:%.2f\n",carro);
	printf("O valor do imposto:%.2f\n",imposto);
	printf("O valor do imposto da distribuidora:%.2f\n",distribuidora);
	printf("Valor final do carro:%.2f\n",total);
}
main(){
	funcaoCusto();
}
