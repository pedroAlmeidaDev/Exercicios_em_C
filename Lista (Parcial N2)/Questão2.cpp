#include<stdio.h>
#include<stdlib.h>

struct nota {
	float n1;
	float n2;
	float n3;
	float mf;
	float mdp1;
	float mdp2;
	float mdp3;
}nota;

main(){
	printf("\nDigite a primeira nota:");
	scanf("%f",&nota.n1);
	
	nota.mdp1 = nota.n1 * 2;
	
	printf("\nDigite a segunda nota:");
	scanf("%f",&nota.n2);
	
	nota.mdp2 = nota.n2 * 3;
	
	printf("\nDigite a terceira nota:");
	scanf("%f",&nota.n3);
	
	nota.mdp3 = nota.n3 * 5;
	
	nota.mf = (nota.mdp1 + nota.mdp2 + nota.mdp3)/10;
	
	printf("\nA media final do aluno e:%.2f",nota.mf);
	
	
}
