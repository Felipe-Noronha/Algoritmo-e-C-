/*Faça um algoritmo que leia um conjunto de 4 valores, um de cada vez, e, após lidos os valores, escreva
uma tabela de resultados (formatada com linhas verticais e horizontais). A tabela deverá conter cada
valor lido em uma coluna, seu quadrado (na segunda linha) e seu cubo (na terceira linha). Finalizar a
entrada de dados quando os 4 valores digitados forem iguais a zero. Se for digitado algum número
negativo, solicitar que o usuário digite novamente até que o número seja positivo.*/
#include <iostream>
using namespace std;
int main(){
int n1,n2,n3,n4,quad1,quad2,quad3,quad4,cub1,cub2,cub3,cub4;
  do{
    cout<<"Digite o valor de n1: ";
  cin>>n1;
  }while(n1 < 0);
  do{
    cout<<"Digite o valor de n2: ";
  cin>>n2;
  }while(n2 < 0);
  do{
    cout<<"Digite o valor de n3: ";
  cin>>n3;
  }while(n3 < 0);
  do{
    cout<<"Digite o valor de n4: ";
  cin>>n4;
  }while(n4 < 0);
  if(n1==0&&n2==0&&n3==0&&n4==0){
    exit(0);
  }
  quad1 = n1*n1;
  quad2 = n2*n2;
  quad3 = n3*n3;
  quad4 = n4*n4;

  cub1 = n1*n1*n1;
  cub2 = n2*n2*n2;
  cub3 = n3*n3*n3;
  cub4 = n4*n4*n4;

  cout<<n1<<"\t"<<n2<<"\t"<<n3<<"\t"<<n4<<"\t"<<"\n"<<quad1<<"\t"<<quad2<<"\t"<<quad3<<"\t"<<quad4<<"\n"<<cub1<<"\t"<<cub2<<"\t"<<cub3<<"\t"<<cub4;
}
