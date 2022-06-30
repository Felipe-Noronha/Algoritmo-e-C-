/*Uma loja tem, para cada um dos seus 10 funcionários, uma ficha contendo a identidade, o número de
horas trabalhadas e a quantidade de dependentes do mesmo. Considerando que:
a) A empresa paga 12 reais por hora e 40 reais por dependentes (salário bruto).
b) Sobre o salário bruto são feitos descontos de 8,5% para o INSS e 5% para o IR (salário líquido).
Elabore um algoritmo que leia os dados de todos os funcionários, calcule e escreva os salários bruto
(total) e líquido (total – descontos) de cada funcionário e a identidade de todos os funcionários com mais
de 3 dependentes.*/
#include <iostream>
using namespace std;
int main(){

int identidade,horas,dependentes;
float salario,liquido;

  cout<<"Digite sua identidade:\n";
  cin>>identidade;
  cout<<"Digite as horas trabalhadas:\n";
  cin>>horas;
  cout<<"Digite a quantidade de dependentes:\n";
  cin>>dependentes;
    
  salario = (12*horas) + (40*dependentes);
  liquido = salario * 0.135;

  cout << "Salario bruto:\n" << salario << "\nSalario liquido:\n" << liquido;

  if(dependentes>3){
    cout<<"\nIdentidade com mais de 3 dependentes: "<<identidade;
  }
  
}
