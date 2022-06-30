/*Elabore um algoritmo que leia um vetor A de 10 elementos e construa um vetor P formado pelos índices dos
elementos pares de A. Exemplo: Se A = [1 3 6 7 8], seus elementos pares estão nos índices 2 e 4 . Assim, P
= [2 4].*/

#include <iostream>
using namespace std;

int main(){

  int v[10],p[10],i,j=0,par;

  for(i=0;i<10;i++){
    p[i]= 0;
  }
  
  for(i=0;i<10;i++){
    cout<<"Digite o valor de "<<i<<": ";
    cin>>v[i];
  }
  
  for(i=0;i<10;i++){
    par = (v[i] % 2);

    if(par==0){
      p[i] = j;
    }
    j++;

    cout<<p[i]<<"\t";
  }
}
