#include<stdio.h>
int main(){

            float Preco_Maca,Preco_Morango,Peso_Maca,Peso_Morango,Total_Morango,Total_Maca,Final;


            Preco_Maca = 1.8;
            Preco_Morango = 2.5;

            printf("Quantos Kilos de Morangos: ");
            scanf("%f",&Peso_Morango);

            printf("Quantos Kilos de Maca : ");
            scanf("%f",&Peso_Maca);

            if (Peso_Morango > 5){
               Total_Morango = (Preco_Morango - 0.3) * Peso_Morango;
            }else{
               Total_Morango = Preco_Morango * Peso_Morango;
            }

            if (Peso_Maca > 5) {
               Total_Maca = (Preco_Maca - 0.3) * Peso_Maca;
            }else{
               Total_Maca = Preco_Maca * Peso_Maca;
            }

            if((Total_Morango + Total_Maca > 25) || (Peso_Morango + Peso_Maca > 8)){

                 Final = (Total_Morango + Total_Maca) * 0.9;
            }else{

                 Final =  Total_Morango + Total_Maca;
            }

            printf("Preco Final da Compra :  R$  %.2f\n",Final);

            return(0);
}
