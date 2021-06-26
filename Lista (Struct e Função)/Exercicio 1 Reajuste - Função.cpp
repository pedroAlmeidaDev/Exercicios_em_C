#include<stdio.h>

funcaoReajuste(){
	float salario,reajuste,novoSalario;
	
	printf("Digite o seu salario:");
	scanf("%f",&salario);
	printf("Digite o reajuste:");
	scanf("%f",&reajuste);
	
	novoSalario = salario+(salario*reajuste)/100;
	
	printf("O valor do salario com o reajuste e:%.2f",novoSalario);
}
main(){
	
	funcaoReajuste();
}
