/*Em um jogo de adivinha��o, o jogador deve descobrir um n�mero entre 1 e 10 usando at� tr�s tentativas.
A cada tentativa o jogador � informado se o n�mero foi descoberto, se ele � maior ou menor do que a
tentativa. Se ap�s tr�s tentativas o jogador n�o descobrir o n�mero, ent�o ele perde o jogo. Fa�a um
algoritmo que implemente esse jogo, considerando que o n�mero a ser descoberto ser� definido dentro
do algoritmo e n�o estar� vis�vel para o usu�rio.*/
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
