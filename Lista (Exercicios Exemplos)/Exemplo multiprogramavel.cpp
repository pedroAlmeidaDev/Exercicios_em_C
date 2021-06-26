#include<stdio.h>
#include<stdlib.h>

main(){
	int qts;
	
	printf("\n@@@@ Multiprogramavel @@@@\n");
	
	printf("\nDigite a quantidade de programas a ser executado:\n");
	scanf("%d",&qts);
	
	if(qts >=1){
		printf("Executando programa.................");
	}else if(qts <= 0){
		printf("\nExecucao cancelada!!\n");
		printf("\nNenhum programa reconhecido!!\n");
	}else{
		printf("Executando programa.................");
	}
	return 0;
}
