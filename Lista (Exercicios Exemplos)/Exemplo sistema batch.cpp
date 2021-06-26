#include<stdio.h>

main(){
	int proces;
	
	printf("\n@@@@ Sistema Batch @@@@\n");
	
	printf("Digite o numero de processos:");
	scanf("%d",&proces);
	
	while(proces >=1){
		printf("#Acrescentar processo#");
		scanf("%d",&proces);
		printf("Em processamento.....");
	}
}
