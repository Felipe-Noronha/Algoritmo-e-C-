/*Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores
positivos diferentes de n. 
Construa um programa em C que verifica se um dado número é perfeito. Ex: 6
é perfeito, pois 1+2+3 = 6.*/
#include <iostream>
using namespace std;
int main(){
  int num, soma = 0, i;
  cout<<"Digite um numero:\n";
  cin>>num;
  for (i = 1; i<num; i++){
    if(num % i == 0 ){
      soma += i;
    }
  }
   if (soma == num){
      cout<<"eh um numero perfeito";
    }
    else
      cout<<"nao eh perfeito";
}
