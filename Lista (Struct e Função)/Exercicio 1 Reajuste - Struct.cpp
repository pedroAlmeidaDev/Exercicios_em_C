#include<stdio.h>

struct Reajuste{
	float salario;
	float reajuste;
	float novoSalario;
}reaj;

main(){
	printf("Digite o seu salario:");
	scanf("%f",&reaj.salario);
	printf("Digite o valor do reajuste:");
	scanf("%f",&reaj.reajuste);
	
	reaj.novoSalario = reaj.salario+(reaj.salario*reaj.reajuste)/100;
	
	printf("O novo salario com rejuste e: %.2f",reaj.novoSalario);
}
