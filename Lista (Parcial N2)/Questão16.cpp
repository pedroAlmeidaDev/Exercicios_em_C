#include <stdio.h>

categoria(){
	
	int num;
	
	printf("Digite numero 1 \ncaso tenha 5 a 10 anos. \nDigite numero 2 \ncaso tenha 11 a 15 anos. \nDigite numero 3 \ncaso tenha 16  20 anos. \nDigite numero 4 \ncaso tenha 21 a 25 anos.\n ");
	scanf("%i",&num);
	
		
	switch (num){
		case 1:
			printf("\nCategoria Infantil\n");
		break;
		
		case 2:
			printf("\nCategoria Juvenil\n");
		break;
		
		case 3:
			printf("\nCategoria Junior\n ");
		break;
		
		case 4:
			printf("\nCategoria Profissional");
		
		default:
		    printf("\nNumero não reconhecido.");	
			
			
	}
}
main(){
	
	
	categoria();
}
