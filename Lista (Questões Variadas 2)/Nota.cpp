#include<stdio.h>
#include<stdlib.h>

//Ler as notas de duas avaliações de um aluno. Calcular a média aritmética simples e escrever uma mensagem que diga se o aluno foi ou não aprovado (considerar que nota igual ou maior que 6 o aluno é aprovado). Escrever também a média calculada.
struct Notas{
	float nota1,nota2,media;
	
}nota;

main(){
	printf("Digite a primeira nota:");
	scanf("%f",&nota.nota1);
	printf("Digite a segunda nota:");
	scanf("%f",&nota.nota2);
	
	nota.media = (nota.nota1+nota.nota2)/2;
	
	if(nota.media >= 6){
		printf("Aluno aprovado!!");
	}else{
		printf("Aluno reprovado");
	}
	
	printf("\nA media do aluno e: %.2f",nota.media);
	
}
