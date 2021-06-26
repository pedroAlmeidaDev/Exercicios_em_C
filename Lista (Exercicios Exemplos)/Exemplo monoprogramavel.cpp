#include<stdio.h>
#include<stdlib.h>

main(){
	int qts;
	
	printf("\n@@@@ Monoprogramavel @@@@\n");
	
	printf("\nDigite a quantidade de programas a ser executado:\n");
	scanf("%d",&qts);
	
	if(qts >=2){
		printf("\nExecucao cancelada!!\n");
		printf("\nSistema e Monoprogramavel!!\n");
	}else if(qts <=0){
		printf("\nExecucao cancelada!!\n");
		printf("\nNenhum programa reconhecido!!\n");
	}else{
		printf("Executando programa.........................");
	}
	return 0;
}
