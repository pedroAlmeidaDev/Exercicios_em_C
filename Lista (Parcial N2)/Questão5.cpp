#include<stdio.h>
#include<stdio.h>

struct Conta{
	int cont;
	float salAtual;
	float sal;
	float deb;
	float cred;
}conta;

main(){
	printf("\nInforme o numero da sua conta:");
	scanf("%d",&conta.cont);
	
	printf("\nDigite o seu saldo:");
	scanf("%f",&conta.sal);
	
	printf("\nDigite seu debito:");
	scanf("%f",&conta.deb);
	
	printf("\nDigite o seu credito:");
	scanf("%f",&conta.cred);
	
	conta.salAtual = conta.sal - conta.deb + conta.cred;
	
	if(conta.salAtual >=0){
		printf("\nSaldo positivo!");
	}else{
		printf("\nSaldo negado!");
	}
}
