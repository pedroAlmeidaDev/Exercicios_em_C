#include<stdio.h>
#include<stdlib.h>

struct situacao{
	float nota1;
	float nota2;
	int faltas;
	float mdf;
}situac;

main(){
		
	printf("\nDigite a primeira nota:");
	scanf("%f",&situac.nota1);
	
	printf("\nDigite a segunda nota:");
	scanf("%f",&situac.nota2);
	
	printf("\nDigite a quantidade de faltas:");
	scanf("%d",&situac.faltas);
	
	situac.mdf = (situac.nota1 + situac.nota2)/2;
	
	printf("\nA media do aluno e:%.2f\n",situac.mdf);
	
	if((situac.faltas <10)&& (situac.mdf >=5)){
		printf("\nAluno Aprovado!");
			
	}else if((situac.faltas <10) && (situac.mdf >=4)){
		printf("\nAluno ira fazer prova final");
		
	}else{
		printf("\n!Aluno Reprovado!");
	}
	
}
