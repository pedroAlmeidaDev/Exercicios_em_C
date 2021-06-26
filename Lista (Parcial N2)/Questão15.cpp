#include<stdio.h>
#include<stdlib.h>

struct Empresa{
	float salario;
	int cod;
	float nsalario;
	float aumento;
	float dif;
	
}empres;

main(){
	printf("\nDigite o codigo do seu cargo:");
	scanf("%d",&empres.cod);
	
	printf("\nDigite o seu salario:");
	scanf("%f",&empres.salario);
	
	if(empres.cod == 1){
		empres.nsalario = empres.salario + (empres.salario*0.02);
		empres.dif = empres.nsalario - empres.salario;
		printf("\nSalario antigo: %.2f",empres.salario);
		printf("\nNovo salario: %.2f",empres.nsalario);
		printf("\nDiferença: %.2f",empres.dif);
	}else if(empres.cod == 2){
		empres.nsalario = empres.salario + (empres.salario*0.03);
		empres.dif = empres.nsalario - empres.salario;
		printf("\nSalario antigo: %.2f",empres.salario);
		printf("\nNovo salario: %.2f",empres.nsalario);
		printf("\nDiferença: %.2f",empres.dif);
	}else if(empres.cod == 3){
		empres.nsalario = empres.salario + (empres.salario*0.05);
		empres.dif = empres.nsalario - empres.salario;
		printf("\nSalario antigo: %.2f",empres.salario);
		printf("\nNovo salario: %.2f",empres.nsalario);
		printf("\nDiferença: %.2f",empres.dif);
	}else if(empres.cod == 4){
		empres.nsalario = empres.salario + (empres.salario*0.07);
		empres.dif = empres.nsalario - empres.salario;
		printf("\nSalario antigo: %.2f",empres.salario);
		printf("\nNovo salario: %.2f",empres.nsalario);
		printf("\nDiferença: %.2f",empres.dif);
	}else if(empres.cod == 5){
		empres.nsalario = empres.salario + (empres.salario*0.10);
		empres.dif = empres.nsalario - empres.salario;
		printf("\nSalario antigo: %.2f",empres.salario);
		printf("\nNovo salario: %.2f",empres.nsalario);
		printf("\nDiferença: %.2f",empres.dif);
	}else{
		empres.nsalario = empres.salario + (empres.salario*0.015);
		empres.dif = empres.nsalario - empres.salario;
		printf("\nSalario antigo: %.2f",empres.salario);
		printf("\nNovo salario: %.2f",empres.nsalario);
		printf("\nDiferença: %.2f",empres.dif);
		
	}
		
	}
