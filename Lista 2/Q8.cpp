/*Elabore um algoritmo que leia um vetor V de 10 posi��es de inteiros, n�o permitindo que sejam digitados
n�meros negativos. Em seguida, leia um n�mero inteiro qualquer e verifique se o n�mero existe*/

#include <iostream>
using namespace std;

int main(){


int v[10],i,n,pos;
bool existe = false;

  for(i=0;i<10;i++){
    do{
      cout<<"Digite o valor do "<<i<<"numero:\n";
      cin>>v[i];
    }while(v[i]<0);
  }

  cout<<"Digite o numero para verificar:\n";
  cin>>n;

  for(i=0;i<10;i++){
    if(n==v[i]){
      pos = i;
      existe = true;
    }
  }

  if(existe == true){
    cout<<"Existe e o indice do numero eh: "<< pos;
  }
  else
    cout<<"Numero nao localizado!";
  
  
}
