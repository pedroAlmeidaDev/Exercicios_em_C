#include <stdio.h>

struct atleta{
	char nome[30];
	int idade;
	int cat;
	int desc;
	
}atlet;

main(){
	printf("\nDigite seu nome:");
	scanf("%s",&atlet.nome);
	
	printf("\nDigite a sua idade:");
	scanf("%d",&atlet.idade);
	
	printf("\nDigite o numero da sua categoria:");
	scanf("%d",&atlet.cat);
	
	printf("\nNome: %s",atlet.nome);
	printf("\nIdade: %d",atlet.idade);
	printf("\nCategoria: %d\n",atlet.cat);
	
	printf("\nDigite 1 para continuar executando!");
	printf("\nDigite 2 para sair do programa!\n");
	scanf("%d",&atlet.desc);
	
	while(atlet.desc ==1){
	printf("\nDigite seu nome:");
	scanf("%s",&atlet.nome);
	
	printf("\nDigite a sua idade:");
	scanf("%d",&atlet.idade);
	
	printf("\nDigite o numero da sua categoria:");
	scanf("%d",&atlet.cat);
	
	printf("\nNome: %s",atlet.nome);
	printf("\nIdade: %d",atlet.idade);
	printf("\nCategoria: %d\n",atlet.cat);
	
	printf("\nDigite 1 para continuar executando!");
	printf("\nDigite 2 para sair do programa!\n");
	scanf("%d",&atlet.desc);
	}
	
	if(atlet.desc == 2){
		return 0;
	}
	
	
	
}
