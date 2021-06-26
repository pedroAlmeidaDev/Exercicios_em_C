#include<stdio.h>
#include<stdlib.h>

struct Salario{
	float salario;
	float reaj;
	float aumento;
	float nsalario;
}sal;

main(){
	
	printf("\nDigite o seu salario:\n");
	scanf("%f",&sal.salario);
	
	printf("\nDigite o novo reajuste:\n");
	scanf("%f",&sal.reaj);
	
	printf("\nreajuste:%.2f\n",sal.reaj);
	
	sal.aumento = (sal.salario * sal.reaj)/100;
	
	sal.nsalario = sal.salario + sal.aumento;
	
	printf("\nO novo salario e de:%.2f",sal.nsalario);
}
