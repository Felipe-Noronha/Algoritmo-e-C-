/*Elabore um algoritmo que leia um vetor de 15 posi��es de n�meros inteiros e pergunte ao usu�rio quais
elementos ele deseja ver: se os elementos que est�o em �ndices pares ou se os elementos que est�o em
�ndices �mpares. Mostre somente os elementos solicitados. */

#include <iostream>
using namespace std;

int main(){

int v1[15],v2[15],i,opcao,tipo;

  for(i=0;i<15;i++){
    cout<<"Digite o numero:\n";
    cin>>v1[i];
  }
  cout<<"Quais elementos deseja ver? digite 1-impares ou 2 para pares.";
  cin>>opcao;

  switch(opcao){
    case 1: for(i=0;i<15;i++){
                tipo =(v1[i] % 2);
                if(tipo!=0){
                  v2[i] = v1[i];
                }
                else
                  v2[i] = 0;
              
    cout<<v2[i]<<"\n";              
    }break;

    case 2: for(i=0;i<15;i++){
                tipo = (v1[i]%2);
                if(tipo==0){
                  v2[i] = v1[i];
                }
                else
                  v2[i] = 0;
      cout<<v2[i]<<"\n";
    }break;
  }
