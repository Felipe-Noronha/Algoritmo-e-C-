/*Elabore um algoritmo que preencha automaticamente um vetor de 20 posições de inteiros gerando os
elementos a partir da multiplicação do seu índice por 2. Em seguida, calcule e escreva a soma dos elementos
pares e impares*/

#include <iostream>
using namespace std;

int main(){

int a[20],i,par,soma,somaimpar;

  for(i=0;i<20;i++){
    a[i] = (i * 2);
  }

  for(i=0;i<20;i++){
      par = a[i]%2;
      if(par==0){
        soma = soma + a[i];
      }
      else
        somaimpar = somaimpar + a[i];
  }
  
  cout<<soma<<"\n\n\n"<<somaimpar;
  

}
