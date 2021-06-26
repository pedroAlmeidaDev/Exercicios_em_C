#include<stdio.h>
#include<stdlib.h>

struct senha{
	int usuario;
	int senha;
}sen;

main(){
	printf("Informe o usuario:");
	scanf("%d",&sen.usuario);
	
	while(sen.usuario != 1234){
		printf("\n!Usuario invalido!\n");
		printf("\ninforme o usuario:");
		scanf("%d",&sen.usuario);
	}
	
	printf("Informe a senha:");
	scanf("%d",&sen.senha);
	
	while(sen.senha != 9999){
		printf("\n!Senha Incorreta!\n");
		printf("\nInforme a senha:");
	    scanf("%d",&sen.senha);
	}
	printf("\n!Acesso Permitido!\n");
	printf("\nUsuario: %d",sen.usuario);
	printf("\nSenha: %d",sen.senha);
	
}
