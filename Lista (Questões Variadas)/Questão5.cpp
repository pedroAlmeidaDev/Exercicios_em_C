#include <stdio.h>
#include <stdlib.h>

int ano, tempodeserv,nasc,total, tempodeserv1,teste;

int main() {		

printf("\n\n\n Informe o ano de nascimento : ");
scanf("%d", &nasc);
printf("\n\n\n Informe o ano de ingresso de serviço : ");
scanf("%d", &tempodeserv);
printf("\n\n\n Informe o ano atual: ");
scanf("%d", &ano);
			
tempodeserv1= ano - tempodeserv;
teste = ano - nasc;
if(teste>= 65 || tempodeserv1>=30 || teste>= 60 && tempodeserv1 > 25){

printf("\n Sua idade :%i", teste);
printf("\n twmpo de servico : %i ", tempodeserv1);
printf("\nRequerer aposentadoria : ");
				
}else {
printf("\n Sua idade :%i", teste);
printf("\n twmpo de servico : %i ", tempodeserv1);
printf("\n Nao deve Requerer aposentadoria : ");
				
}	
return 0;
}

