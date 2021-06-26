#include<stdio.h>
#include<stdlib.h>

struct avaliacao{
	float n1;
	float n2;
	float md;
	
}avalia;

main(){
	printf("\nDigite a primeira nota:");
	scanf("%f",&avalia.n1);
	printf("\nDigite a segunda nota:");
	scanf("%f",&avalia.n2);
	
	avalia.md = (avalia.n1 + avalia.n2)/2;
	
	if(avalia.md >=0 && avalia.md <=10){
		printf("\nA media do aluno e:%.2f",avalia.md);
	}else{
		printf("\nNota invalida!!");
	}
}
