/*Elabore um algoritmo que leia dois vetores, A (10 elementos inteiros) e B (12 elementos inteiros), e escreva
todos os elementos comuns aos dois vetores. */

#include <iostream>
using namespace std;

int main(){

int v[10],vb[10],vc[10],i,j;

  for(i=0;i<10;i++){
    cout<<"Digite o valor de "<<i<<":";
    cin>>v[i];
  }

  for(i=0;i<10;i++){
    vc[i]=i;
  }
  
  for(i=0;i<10;i++){
    cout<<"Digite o valor de "<<i << "segundo vetor :";
    cin>>vb[i];
        if(v[i]==vb[i]){
          vc[i] =vb[i];
        }
  }


  for(i=0;i<10;i++){
    cout<<vc[i]<<"\t";
  }
