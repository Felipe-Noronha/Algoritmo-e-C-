/*Elabore um algoritmo que apresente um menu contendo as op��es 1-Tri�ngulo, 2-Quadrado, 3-
Ret�ngulo, 4-Trap�zio, 5-C�rculo, 6-Sair. Em seguida, de acordo com a op��o escolhida pelo usu�rio, o
algoritmo deve solicitar as informa��es necess�rias para c�lculo da �rea, efetuar o c�lculo e escrever o
resultado. O algoritmo s� dever� finalizar quando o usu�rio escolher a op��o 6-Sair.*/
#include <iostream>
using namespace std;
int main(){
int opcao;
float base,baseM,altura,area,lado,raio;
bool fechar=true;
  do{
  cout<<"\nDigite a opcao desejada:\n"<<"1-triangulo"<<"\n2-quadrado"<<"\n3-retangulo"<<"\n4-trapezio"<<"\n5-circulo" << "\n6-sair\n";
  cin>>opcao;
switch(opcao){
  case 1: cout<<"Digite o valor da base:\n";
          cin>>base;
         cout<<"Digite o valor da altura:\n";
          cin>>altura;

        area= (base*altura)/2;

        cout<<"O valor da area eh: "<< area;
  break;
  
  case 2: cout<<"Digite o valor do lado:\n";
          cin>>lado;

          area = lado * lado;
    
          cout<<"O valor da area eh:\n" << area;
  break;
          
  case 3: cout<<"Digite o valor da base:\n";
          cin>>base;
          cout<<"Digite o valor da altura:\n";
          cin>>altura;

          area = base * altura;

          cout<<"O valor da area eh:\n" << area;
  break;
    

  case 4: cout<<"Digite o valor da base:\n";
          cin>>base;
          cout<<"Digite o valor da base menor:\n";
          cin>>baseM;
          cout<<"Digite o valor da altura:\n";
          cin>>altura;

          area = ((base + baseM) * altura) / 2;
    
          cout<<"O valor da area eh:\n" << area;
  break;
  
  case 5: cout<<"Digite o valor do raio:\n";
          cin>>raio;
          area = (3.14 * (raio * raio));
          cout<<"O valor da area eh:\n" << area;
  break;
  
  case 6: exit(0);
    fechar=false;
  break;
}
    }while(fechar==true);
  
}
