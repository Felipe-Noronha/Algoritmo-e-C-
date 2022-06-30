/*. Elabore um algoritmo que:
Solicite um número inteiro N ao usuário.
Declare um vetor V com N elementos inteiros.
Gere os elementos do vetor de tal forma que o primeiro seja N e os próximos sejam sempre iguais ao dobro
do anterior.
Solicite um número inteiro X ao usuário e busque este elemento no vetor. Caso exista, troque X pelo menor
elemento existente no vetor e o menor elemento por X. Caso não exista, informe ao usuário.
Mostre o vetor antes e depois da mudança.*/

#include <iostream>
using namespace std;

int main(){


  int n,tam,i,aux,buscar,menor;
  bool primeiro = false, existe = false;

  cout<<"Digite um numero inteiro:\n";
  cin>>n;

  cout<<"Digite o numero de elementos do vetor:\n";
  cin>>tam;

  int v[tam],m[tam];

  for(i=0;i<tam;i++){
    if(primeiro==false){
      v[i] = n;
      primeiro = true;
      aux = v[i];
      menor = v[i];
    }
    else{
      v[i] = (aux * 2);
      aux = v[i];
      }
    if(v[i]<menor){
      menor = v[i];
    }
  }
  cout<<"Digite um numero para buscar no vetor:\n";
  cin>>buscar;
  for(i=0;i<tam;i++){
    m[i]=v[i];
  }
  for(i=0;i<tam;i++){
    if(buscar==v[i]){
      v[i] = menor;
      menor = buscar;
      existe = true;
      i = tam;
    }
  }
  if(existe!=true){
    cout<<"Nao existe o numero!";
  }
  if(existe == true){
    cout<<"Vetor antes da mudanca:\n";
    for(i=0;i<tam;i++){
      cout<<m[i]<<"\n";
    }
    cout<<"\n\nVetor depois da mudanca:\n";
    for(i=0;i<tam;i++){
      cout<<v[i]<<"\n";
    }
  }
}
