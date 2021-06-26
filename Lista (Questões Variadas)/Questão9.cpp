#include<stdio.h>

struct Numeros{
	int numero1;
	int mdNumero;
	int numI;
	int i;
	
}num;

main(){	

	for(num.i=0;num.i<=9;num.i++){
	printf("Digite um numero:");
	scanf("%d",&num.numero1);
	num.numI ++;
	num.mdNumero = (num.numI + num.numero1)/2;
	
	}
	printf("A media dos numeros: %d",num.mdNumero);
	
}
