/*Elabore um algoritmo que leia uma string qualquer e escreva-a em letras maiúsculas e
espelhada.
Entrada: “uma frase qualquer”
Saída: “reuqlauq esarf amu”
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
int i,tam;
string a;
  cout<<"Digite a frase:\n";
  getline(cin,a);
  tam = a.length();
  string v[tam];
  for(i=0;i<tam;i++){
    v[i] = toupper(a[i]);
  }
  for(i=tam-1;i>=0;i--){
    cout<<v[i]<<"\n";
  }
}
