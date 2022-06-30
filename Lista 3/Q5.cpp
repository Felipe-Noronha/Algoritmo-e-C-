/*Elabore um algoritmo que receba um nome completo em uma string e apresente apenas o
último nome e o 1º nome na seguinte forma último, 1º nome.
Entrada: Ana Fernandes Oliveira
Saída: Oliveira, Ana*/

#include <iostream>
#include <string>
using namespace std;

int main(){

string nome,primeiro,ultimo;
int i,j,l,tam;


  cout<<"Digite o nome:\n";
  getline(cin,nome);

  tam = nome.length();



  for(i=0;i<tam;i++){
    if(nome[i] == ' '){
        l = i;
      for(j=0;j<l;j++){
        primeiro[j] = nome[j];
      } 
      for(j=l;j<tam;j++){
        ultimo[j] = nome[j];
      }
      for(j=l;j<tam;j++){
        cout<<ultimo[j];
      }
      cout<<",";
      for(i=0;i<tam;i++){
        cout<<primeiro[i];
      }
    }
  }
}
