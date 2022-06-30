/*Elabore um algoritmo que apresente um menu contendo as opções 1-Triângulo, 2-Quadrado, 3-
Retângulo, 4-Trapézio, 5-Círculo, 6-Sair. Em seguida, de acordo com a opção escolhida pelo usuário, o
algoritmo deve solicitar as informações necessárias para cálculo da área, efetuar o cálculo e escrever o
resultado. O algoritmo só deverá finalizar quando o usuário escolher a opção 6-Sair.*/
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
