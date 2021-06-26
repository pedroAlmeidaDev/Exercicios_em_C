#include<stdio.h>
#include<stdlib.h>

struct mercado{
	float compra;
	float maca;
	float TotalCompra;
}compr;

main(){
	printf("Digite a quantidade de macas compradas:");
	scanf("%f",&compr.compra);
	
	if(compr.compra >=12){
		compr.maca = 1.00;
	}else{
		compr.maca = 1.30;
	}
	
	compr.TotalCompra = compr.compra * compr.maca;
	
	printf("\nO valor da compra e: %.2f",compr.TotalCompra);
	
}
