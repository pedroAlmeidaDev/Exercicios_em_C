#include<stdio.h>
#include<stdlib.h>

struct Venda{
	char nome[30];
	int quant;
	float preco;
	float desc;
	float totalv;
	float totaldesc;
	float totalf;
}vend;

main(){
	printf("Digite o nome produto:");
	scanf("%s",&vend.nome);
	
	printf("Digite a quantidade do produto:");
	scanf("%d",&vend.quant);
	
	printf("Digite o preco do produto:");
	scanf("%f",&vend.preco);
	
	vend.totalv = vend.quant * vend.preco;
	
	if(vend.quant <= 5){
		vend.desc = 0.2;
		vend.totalv = vend.quant * vend.preco;
		vend.totaldesc = vend.totalv * vend.desc/100;
		vend.totalf = vend.totalv - vend.totaldesc;
	}else if((vend.quant > 5)&& (vend.quant<=10)){
		vend.desc = 0.3;
		vend.totalv = vend.quant * vend.preco;
		vend.totaldesc = vend.totalv * vend.desc/100;
		vend.totalf = vend.totalv - vend.totaldesc;
	}else{
		vend.desc = 0.5;
		vend.totalv = vend.quant * vend.preco;
		vend.totaldesc = vend.totalv * vend.desc/100;
		vend.totalf = vend.totalv - vend.totaldesc;
	}
	
	printf("Total da venda:%.2f",vend.totalf);
	
}
