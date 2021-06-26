//Ler um valor e escrever se é positivo ou negativo(considere o valor zero como positivo)

#include<stdio.h>
#include<stdlib.h>

struct valor{
	int v1;
}val;

main(){
	printf("Digite um valor:");
	scanf("%d",&val.v1);
	
	if(val.v1 >= 0){
		printf("Positivo!!");
	}else{
		printf("Negativo!!");
	}
}
