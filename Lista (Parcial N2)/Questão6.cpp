#include<stdio.h>
#include<stdlib.h>

main(){
	
	int gol1;
	int gol2;
	char time1[30];
	char time2[30];
	
	printf("\nDigite o nome do primeiro time:\n");
	scanf("%s",&time1);
	printf("\nDigite o numero de gols:\n");
	scanf("%d",&gol1);
	printf("\nDigite o nome do segudo time:\n");
	scanf("%s",&time2);
	printf("\nDigite o numero de gols:\n");
	scanf("%d",&gol2);
	
	if(gol1 > gol2){
		printf("\nVencedor:%s",time1);
		printf("\nNumero de gols: %d\n",gol1);
	}else if(gol2 > gol1){
		printf("\nVencedor:%s\n",time2);
		printf("\nNumero de gols: %d",gol2);
	}else{
		printf("\nEmpate");
	}
}
