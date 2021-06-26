#include <conio.h>

#include <stdio.h>

main(){

     int A[] = {9,3,7,6,21};

     int B[] = {6,4,9,2,28};

     int C[5];

     printf("\nValores Originais");

     for(int i=0;i <= 4;i++){

          printf("\nA[%d] = %d - ",i,A[i]);

          printf("\nB[%d] = %d - ",i,B[i]);}

     for(int i=0;i <= 4;i++){

         C[i] = A[i];

         A[i] = B[i];

         B[i] = C[i];};

     printf("\n\n Exibindo......");

     for(int i=0;i <= 4;i++){

          printf("\nA[%d] = %d - ",i,A[i]);

          printf("\nB[%d] = %d - ",i,B[i]);}

      printf("\n\n\n.................FIM..................");
  }

