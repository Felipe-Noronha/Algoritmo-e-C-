/*Fa�a um algoritmo que leia as matr�culas e as respectivas m�dias finais de v�rios alunos de uma turma,
at� que seja digitada uma m�dia negativa. Ao final, o algoritmo deve mostrar a quantidade de alunos
aprovados (m�dia >=7), reprovados (m�dia <3) ou em recupera��o. Al�m disso, o algoritmo deve mostrar
as matr�culas de todos os alunos que obtiveram m�dias superiores a 9.*/
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
