#include<stdio.h>

funcaoIdade(){
	int dia;
	int mes;
	int ano;
	float idadeDia;
	
	printf("Digite a sua idade:\n");
	printf("Dia:");
	scanf("%d",&dia);
	printf("Mes:");
	scanf("%d",&mes);
	printf("Ano:");
	scanf("%d",&ano);
	
	idadeDia = (ano*365)+(mes*30)+dia;
	
	printf("\nSua idadde: %d anos, %d meses, %d dias\n",ano,mes,dia);
	printf("\nIdade em dias:%.2f\n",idadeDia);
}

main(){
	funcaoIdade();
}
