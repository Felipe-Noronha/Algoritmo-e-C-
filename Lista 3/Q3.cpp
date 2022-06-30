/*Elabore um algoritmo que leia duas strings A e B e junte-as em uma única string C.
Entradas: “frase 1” e “outra frase qualquer”
Saída: “frase 1 e outra frase qualquer”*/

#include <iostream>
#include <string>
using namespace std;

int main(){

string a,b;

  cout<<"Digite a primeira frase:\n";
  getline(cin,a);
  cout<<"Digite a segunda frase:\n";
  getline(cin,b);

  cout<<a + b;
  
}
