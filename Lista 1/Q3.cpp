/*Em um jogo de adivinhação, o jogador deve descobrir um número entre 1 e 10 usando até três tentativas.
A cada tentativa o jogador é informado se o número foi descoberto, se ele é maior ou menor do que a
tentativa. Se após três tentativas o jogador não descobrir o número, então ele perde o jogo. Faça um
algoritmo que implemente esse jogo, considerando que o número a ser descoberto será definido dentro
do algoritmo e não estará visível para o usuário.*/
#include <iostream>
using namespace std;
int main(){
 int chute,cont=1;
int num = rand()%10;
  do{
     cout<<"\nChute um numero entre 1 e 10: ";
      cin>>chute;
    cont++;
    if(chute==num){
      cout<<"Voce acertou!!!";
      break;
    }
      else if (chute>num){
        cout<<"Chute maior que o numero!";
      }
        else if(chute<num){
          cout<<"Chute menor que o numero!";
        }
    else
      cout<<"voce errou!!!";
  }while(cont<=3);
}
