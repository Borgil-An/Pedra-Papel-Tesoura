#include <stdio.h>
#include <stdlib.h>

int main(void){
  int jogada,jogadapc,c;
    
  do{
    printf ("Escolha sua jogada:\n 1)Pedra \n 2)Papel \n 3)Tesoura\n 4)Lagarto\n 5)Spock\n");
    scanf ("%d", &jogada);
    
  jogadapc = (rand() %6);
    if (jogadapc==0){
        jogadapc++;
     }
    
   if(jogada==1 && jogadapc==3){
      printf ("Você venceu!\n");
   }
   if(jogada==1 && jogadapc==2){
     printf ("Você perdeu!\n");
   } 
   if(jogada==1 && jogadapc==1){
      printf ("Empate!\n");
   }
   if(jogada==1 && jogadapc==4){
      printf ("Você venceu!\n");
   }
   if(jogada==1 && jogadapc==5){
      printf ("Você perdeu!\n");
   }
   if(jogada==2 && jogadapc==1){
      printf ("Você venceu!\n");
   }
   if(jogada==2 && jogadapc==3){
      printf ("Você perdeu!\n");
   }
   if(jogada==2 && jogadapc==2){
      printf ("Empate!\n");
   }
   if(jogada==2 && jogadapc==4){
      printf ("Você perdeu!\n");
   }
   if(jogada==1 && jogadapc==5){
      printf ("Você venceu!\n");
   }
   if(jogada==3 && jogadapc==1){
      printf ("Você perdeu!\n");
   }
   if(jogada==3 && jogadapc==2){
      printf ("Você venceu!\n");
   }
   if(jogada==3 && jogadapc==3){
      printf ("Empate!\n");
   }
   if(jogada==3 && jogadapc==4){
      printf ("Você venceu!\n");
   }
   if(jogada==3 && jogadapc==5){
      printf ("Você perdeu!\n");
   }
   if(jogada==4 && jogadapc==1){
      printf ("Você perdeu!\n");
   }
   if(jogada==4 && jogadapc==2){
      printf ("Você venceu!\n");
   }
   if(jogada==4 && jogadapc==3){
      printf ("Você perdeu!\n");
   }
   if(jogada==4 && jogadapc==4{
      printf ("Empate!\n");
   }
   if(jogada==4 && jogadapc==5){
      printf ("Você venceu!\n");
   }
   if(jogada==5 && jogadapc==1){
      printf ("Você venceu!\n");
   }
   if(jogada==5 && jogadapc==2){
      printf ("Você perdeu!\n");
   }
   if(jogada==5 && jogadapc==3){
      printf ("Você venceu!\n");
   }
   if(jogada==5 && jogadapc==4){
      printf ("Você perdeu!\n");
   }
   if(jogada==5 && jogadapc==5){
      printf ("Empate!\n");
   }



   printf ("Deseja continuar jogando?\n 1)Sim\n2)Não\n");
     scanf ("%d",&c);
  }while (c==1);
}
