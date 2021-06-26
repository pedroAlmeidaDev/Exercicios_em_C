#include<stdio.h>

funcaoEleitores(){
	float eleitores,brancos,nulos,validos;
	
	printf("Numeros de eleitores:");
	scanf("%f",&eleitores);
	printf("Numeros de votos brancos:");
	scanf("%f",&brancos);
	printf("Numeros de votos nulos:");
	scanf("%f",&nulos);
	printf("Numeros de votos validos:");
	scanf("%f",&validos);
	
	printf("\nPercentual de votos brancos: %.2f%%",(brancos*100)/eleitores);
	printf("\nPercentual de votos nulos: %.2f%%",(nulos*100)/eleitores);
	printf("\nPercentual de votos validos: %.2f%%",(validos*100)/eleitores);
}

main(){
	funcaoEleitores();
}

