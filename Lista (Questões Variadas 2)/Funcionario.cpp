#include<stdio.h>
#include<stdlib.h>

struct funcionario{
	int horas;
	float acrescimo;
	float salarioHora;
	float salarioAtual;
	float salarioFinal;
	float novoSalario;
}func;

main(){
	printf("Digite seu salario/hora:");
	scanf("%f",&func.salarioHora);
	
	printf("Digite a suas horas trabalhadas:");
	scanf("%d",&func.horas);
	
	func.salarioAtual = func.horas * func.salarioHora;
	
	func.acrescimo = 0.50;
	
	if(func.horas >= 40){
		func.novoSalario = func.salarioAtual + func.acrescimo;
		printf("O seu salario com acrescimo: %.2f",func.novoSalario);
	}else{
		printf("sem acrescimo: %.2f",func.salarioAtual);
	}
}
