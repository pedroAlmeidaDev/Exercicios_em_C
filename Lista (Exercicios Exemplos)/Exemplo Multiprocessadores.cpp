#include<stdio.h>

main(){
	int proces1;
	
	printf("\n@@@@ Multiprocessadores @@@@\n");
	
	printf("\nDigite a quantidade de processos sendo executados:\n");
	scanf("%d",&proces1);
	
	while(proces1 >=1){
		printf("\nDigite mais um processo:\n");
		scanf("%d",&proces1);
	}
	return 0;
}
