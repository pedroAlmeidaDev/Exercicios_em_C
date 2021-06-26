#include<stdio.h>
#include<stdlib.h>


struct jogo {

	char time1[30];
    char time2[30];
       int x;
       int y;
             char ncalculo[20];
}game;


int main(){
	



printf("Digite o time 1::::\n");
scanf("%s", &game.time1);
printf("Digite o time 2::::\n");
scanf("%s", &game.time2);
printf("Quantidade de gols do time 1::::\n");
scanf("%d", &game.x);
printf("Quantidade de gols do time 2::::\n");
scanf("%d", &game.y);
printf("Deseja fazer novo calculo ?? Digite s para sim e n para nao ");
scanf("%s", &game.ncalculo);
printf("Quantidade de gols do time 1::::\n");
scanf("%d", &game.x);
printf("Quantidade de gols do time 2::::\n");
scanf("%d", &game.y);

if (game.x>game.y)    {
	
	
printf(" Vencedor time 1 %s",game.time1);
printf(" gols  :: %d",game.x);
}
}
