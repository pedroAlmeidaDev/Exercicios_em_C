#include<stdio.h>

int main(){
	float salario,reajuste,novoSalario;
	
	printf("Digite seu salario:");
	scanf("%f",&salario);
	printf("Digite o reajuste:");
	scanf("%f",&reajuste);
	
	novoSalario = (salario*reajuste)/100;
	
	printf("O valor do salario com o reajuste e:%2.f",novoSalario);
	
	
}
