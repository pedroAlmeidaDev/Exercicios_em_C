#include<stdio.h>

struct Prefeitura{
	float salario;
	int numFilhos;
	float mdSalario;
	int mdNumeroFilhos;
}pref;

main(){
	printf("\nDigite seu salario:");
	scanf("%f",&pref.salario);
	printf("\nDigite o numero de filhos:");
	scanf("%d",&pref.numFilhos);
	
	pref.mdSalario = pref.salario/2;
	pref.mdNumeroFilhos = pref.numFilhos/2;
	
	printf("\nMedia do salario da populacao: %.3f",pref.mdSalario);
	printf("\nMedia do numero de filhos: %d",pref.mdNumeroFilhos);
}
