/*Faça um algoritmo que leia as matrículas e as respectivas médias finais de vários alunos de uma turma,
até que seja digitada uma média negativa. Ao final, o algoritmo deve mostrar a quantidade de alunos
aprovados (média >=7), reprovados (média <3) ou em recuperação. Além disso, o algoritmo deve mostrar
as matrículas de todos os alunos que obtiveram médias superiores a 9.*/
#include <iostream>
using namespace std;
int main(){
  int matricula,media=0,cont=0,scont=0,tcont=0,matriculaN = 0;
 while(media>=0){
     cout<<"Digite a matricula:\n";
  cin>>matricula;
    cout<<"Digite a media:\n";
    cin>>media;
   if (media>9){
     matriculaN = matricula;
   }
   if(media>=7){
     cont++;
   }
   else if (media<3){
     scont++;
   }
   else
    tcont++;
 }
  cout<<"Aprovados:"<< cont<<"\n" << "Reprovados:"<< scont <<"\n" <<"Em recuperacao:" << tcont;
cout<<"\nMatriculas que tiveram media maior que 9: " << matriculaN;

}
