#include <stdio.h>

valores(){
	
	int num, i;
	
	printf("Informe um numero: ");
	scanf("%i",&num);
	
	if(num>0){
		for(i=0; i<=num;i++){
			printf("%d\n",i);
		}
	    }else{
			printf("Numero precisa ser maior que zero.");
		
		}
	}

	
	main(){
		
		
		valores();
	}
