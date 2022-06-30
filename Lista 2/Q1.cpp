/*Elabore um algoritmo que leia 20 elementos de um vetor de inteiros e, em seguida, um valor de código. Se o
código for 1, mostrar o vetor na ordem direta (do primeiro até o último), se o código for 2, mostrar o vetor
na ordem inversa (do último até o primeiro).*/
#include <iostream>
using namespace std;

int main(){

  int v[20], num,i,codigo,j,aux;

    for(i=0;i<20;i++){
      cout<<"Digite o valor do numero:\n";
      cin>>num;
      v[i] = num;
    }

      cout<<"Digite o codigo: 1 ou 2:\n";
      cin>>codigo;

  
        switch(codigo){
          case 1: for(i=0;i<20;i++){

                      for(j= i+1;j<20;j++){
                          if(v[i]>v[j]){
                            aux = v[i];
                            v[i]= v[j];
                            v[j] = aux;
                          }
                        
                      }
            cout<<v[i]<<"\t";
          } 
            break;

          case 2: for(i=0;i<20;i++){

                      for(j= i+1; j <20; j++){

                        if(v[i]<v[j]){
                          aux = v[i];
                          v[i] = v[j];
                          v[j] = aux;
                        }
                      }
                  cout<<v[i] <<"\t";
                  }break;

    }
  
}
