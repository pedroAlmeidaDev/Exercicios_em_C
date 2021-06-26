#include<stdio.h>
#include<stdlib.h>

struct Venda{
	float salario;
	float comis;
	float reaj;
	float vdtotal;
	float stotal;
}venda;

main(){
	
	printf("Digite seu salario:");
	scanf("%f",&venda.salario);
	
	printf("Digite o  valor da venda:");
	scanf("%f",&venda.vdtotal);
	
	if(venda.vdtotal > 1500){
		venda.comis = 0.5;
		venda.reaj = (venda.salario * venda.comis)/100;
		venda.stotal = (venda.reaj + venda.salario);	
	}else{
		venda.comis = 0.3;
		venda.reaj = (venda.salario * venda.comis)/100;
		venda.stotal = (venda.reaj + venda.salario);
	}
	
	printf("O novo salario e:%.2f",venda.stotal);
	
}
