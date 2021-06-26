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
			while(num <0){
					printf("Informe um numero: ");
					scanf("%i",&num);
					for(i=0; i<=num;i++){
					printf("%d\n",i);
		}
			}
		
		}
	}

	
	main(){
		
		
		valores();
	}
