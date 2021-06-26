#include<stdio.h>
#include<stdlib.h>

struct Eleitores{
	float eleitores,brancos,nulos,validos;
	
}eleit;

main(){
	printf("Numeros de eleitores:");
	scanf("%f",&eleit.eleitores);
	printf("Numeros de votos brancos:");
	scanf("%f",&eleit.brancos);
	printf("Numeros de votos nulos:");
	scanf("%f",&eleit.nulos);
	printf("Numeros de votos validos:");
	scanf("%f",&eleit.validos);
	
	printf("\nPercentual de votos brancos: %.2f%%",(eleit.brancos*100)/eleit.eleitores);
	printf("\nPercentual de votos nulos: %.2f%%",(eleit.nulos*100)/eleit.eleitores);
	printf("\nPercentual de votos validos: %.2f%%",(eleit.validos*100)/eleit.eleitores);
}
