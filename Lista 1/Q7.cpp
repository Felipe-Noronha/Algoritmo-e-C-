/*Elabore um algoritmo que leia um número qualquer e escreva todos os seus divisores.*/

#include <iostream>
using namespace std;

int main(){

int numero,cont=1,resto;

cout<<"Digite o numero:\n";
  cin>>numero;

for(cont=1;cont<=numero;cont++){

  resto = (numero % cont);

   if(resto==0){
      
    cout<<"\n"<<cont<<" eh divisor de "<<numero;

  }

}
  
  }
