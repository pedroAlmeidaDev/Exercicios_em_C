#include <conio.h>

#include <stdio.h>

main(){

     int maior = 0,menor = 99999;

     int exerc_matriz [3][3];

     for(int l=0;l<=2;l++)

       for(int c=0;c<=2;c++){

              printf("Digite valor para exerc_matriz[%d][%d].: ",l,c);

              scanf("%d",&exerc_matriz[l][c]);

              if (exerc_matriz[l][c] > maior)

                 maior = exerc_matriz[l][c];

              if (exerc_matriz[l][c] < menor)

                  menor = exerc_matriz[l][c];};

     printf("\n"); 

     for(int l=0;l<=2;l++)

       for(int c=0;c<=2;c++)

          printf("\nO valor de exerc_matriz[%d][%d].: %d",l,c,exerc_matriz[l][c]);

         printf("\n\n O maior valor da matriz .: %d",maior);

     printf("\n\n O menor valor da matriz .: %d",menor);

     printf("\n\n\n.................FIM..................");

      getch();   // esperar uma tecla

}
