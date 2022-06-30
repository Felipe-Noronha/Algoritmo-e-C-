/*Elabore um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante. */

#include <iostream>
using namespace std;

int main(){
  int v[10],vb[10],vc[10],i;
  for(i=0;i<10;i++){
    cout<<"Digite o valor do indice "<<i<<":";
    cin>>v[i];
  }
  for(i=0;i<10;i++){
    cout<<"Digite o valor do indice "<<i<<" do segundo vetor:";
    cin>>vb[i];
  }
  for(i=0;i<10;i++){
    vc[i] = (v[i] * vb[i]);
  }
  for(i=0;i<10;i++){
    cout<<vc[i]<<"\t";
  }
}
