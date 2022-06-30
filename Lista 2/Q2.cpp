/*Elabore um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores
pares existem no vetor e troque cada um desses elementos por 0. Em seguida escreva o vetor final.*/
#include <iostream>
using namespace std;

int main(){

int v[20],i,par,aux,j=0;

  for(i=0;i<20;i++){
      cout<<"Digite o numero:\n";
      cin>>v[i];
  }
    for(i=0;i<20;i++){
        par = (v[i] % 2);
        if(par == 0){
          j++;
          v[i] = 0;
        }
      cout<<v[i]<<"\n";
    }
}
