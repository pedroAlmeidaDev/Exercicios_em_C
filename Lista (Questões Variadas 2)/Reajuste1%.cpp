#include<stdio.h>
#include<stdlib.h>

struct aplicacao{
	float saldoAtual;
	float reajuste;
	float novoSaldo;
}app;

main(){
	printf("Digite o saldo atual:");
	scanf("%f",&app.saldoAtual);
	
	app.reajuste = 0.1;
	
	app.novoSaldo = app.saldoAtual + app.reajuste;
	
	printf("O novo saldo e: %.2f",app.novoSaldo);
}
