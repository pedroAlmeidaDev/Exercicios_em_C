#include<stdio.h>

struct Idade{
	int dia;
	int mes;
	int ano;
	float idadeDia;
}id;

main(){
	printf("Digite a sua idade:\n");
	printf("Dia:");
	scanf("%d",&id.dia);
	printf("Mes:");
	scanf("%d",&id.mes);
	printf("Ano:");
	scanf("%d",&id.ano);
	
	id.idadeDia = (id.ano*365)+(id.mes)+id.dia;
	
	printf("\nSua idade: %d anos, %d meses, %d dia\n",id.ano,id.mes,id.dia);
	printf("Idade em dias:%.2f",id.idadeDia);
}
