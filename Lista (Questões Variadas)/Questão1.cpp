#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct combustivel{
	int opcao;
	float litro;
	float gasolina;
	float alcool;
	float compra;
	float total;
	char tipo[1];
	float descontoG1;
	float descontoG2;
	float descontoA1;
	float descontoA2;
	
}comb;

main(){
	
	comb.gasolina = 4.30;
	comb.alcool = 3.00;
	
	printf("\nDigite o tipo de combustivel:\n");
	scanf("%s",&comb.tipo);
	
	if((comb.tipo == "G") || (comb.tipo == "g")){
		comb.opcao = 1;
		printf("Gasolina");
	}else{
		comb.opcao = 2;
		printf("Alcool");
	}
	
	
	printf("\nDigite a quantidade de litros:\n");
	scanf("%f",&comb.litro);
	
	if((comb.opcao == 1) || (comb.litro <= 20)){
		comb.compra = comb.litro * comb.gasolina;
		comb.descontoG1 = (comb.compra*04)/100;
		comb.total = comb.compra - comb.descontoG1;
	}else if((comb.opcao == 1) || (comb.litro > 20)){
		comb.compra = comb.litro * comb.gasolina;
		comb.descontoG2 = (comb.compra*06)/100;
		comb.total = comb.compra - comb.descontoG2;
	}else if((comb.opcao == 2) || (comb.litro <= 20)){
		comb.compra = comb.litro * comb.alcool;
		comb.descontoA1 = (comb.compra*03)/100;
		comb.total = comb.compra - comb.descontoA1;
	}else{
		comb.compra = (comb.litro * comb.alcool);
		comb.descontoA2 = (comb.compra*05)/100;
		comb.total = comb.compra - comb.descontoA2;
	}
	printf("\nO valor da compra e: %.2f",comb.total);
	
	return 0;
	
	
}
