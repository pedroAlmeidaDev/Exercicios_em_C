#include<stdio.h>

struct idade{
	int H1;
	int H2;
	int M1;
	int M2;
	int HMV;
	int MMN;
}id;

main(){
	printf("Digite a idade do primeiro homem:");
	scanf("%d",&id.H1);
	printf("Digite a idade do segundo homem:");
	scanf("%d",&id.H2);
	
	while(id.H1 != id.H2){
		if((id.H1 > id.H2) || (id.H2 > id.H1)){
		
		}
	}
	
	printf("Digite a idade da primeira mulher:");
	scanf("%d",&id.M1);
	printf("Digite a idade da segunda mulher:");
	
	while(id.M1 != id.M2){
		if((id.M1 > id.M2) || (id.M2 > id.M1))	
	}
	
}

