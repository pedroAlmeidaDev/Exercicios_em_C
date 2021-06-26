#include<stdio.h>

struct idade{
	int idHomem1;
	int idHomem2;
	int idMulher1;
	int idMulher2;
	int produto;
	int soma;
	
}id;

main(){
printf("Digite a idade do homem mais velho: ");
	scanf("%d",&id.idHomem1);
	printf("Digite a idade do homem mais novo: ");
	scanf("%d",&id.idHomem2);
	printf("Digite a idade da mulher mais velha: ");
	scanf("%d",&id.idMulher1);
	printf("Digite a idade da mulher mais nova: ");
    scanf("%d",&id.idMulher2);
	
	if (id.idHomem1>id.idHomem2){
	if (id.idMulher1<id.idMulher2){
	id.soma = id.idHomem1+id.idMulher2;
	id.produto = id.idHomem2*id.idMulher2;
	}else{
	id.soma = id.idHomem1+id.idMulher2;
	id.produto = id.idHomem2*id.idMulher1;
}
	}else{

	if (id.idMulher1<id.idMulher2){
	id.soma = id.idHomem2+id.idMulher1;
	id.produto = id.idHomem1*id.idMulher2;
	}else{

	id.soma = id.idHomem2+id.idMulher2;
	id.produto = id.idHomem1*id.idMulher1;
}
}
	
	printf("\n Soma das idades do homem mais velho com a mulher mais nova: %d",id.soma);
	printf("\n Produto das idades do homem mais novo com a mulher mais velha: %d",id.produto);
	
}


