#include<stdio.h>

int main(){
	int idade,dia,mes,ano;
	
	printf("Digite a sua idade:");
	printf("Ano:");
	scanf("%d",&ano);
	printf("mes:");
	scanf("%d",&mes);
	printf("dia:");
	scanf("d%",&dia);
	
	idade=(ano*365) + (mes*30) + dia;
	
	printf("\nSua idade: %d anos, %d meses e %d dias\n",ano,mes,dia);
	printf("Idade em dias: %d\n",idade);
	
}
