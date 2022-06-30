/*Elabore um algoritmo que leia um vetor de 20 posições de inteiros e verifique se ele é um palíndromo, ou
seja, se a sua leitura em qualquer direção é a mesma.*/

#include <iostream>
using namespace std;

int main(){
int v[20],i,j;
bool poli = false;
  for(i=0;i<20;i++){
    cout<<"Digite o numero para a posicao "<<i<<":";
    cin>>v[i];
    j++;
  }
  for(i=0;i<20;i++){
    if(v[i]==v[j]){
      poli = true;
    }
    else
      poli = false;
  }
  if(poli==true){
    cout<<"eh poli";
  }
  else
    cout<<"nao eh";
}
