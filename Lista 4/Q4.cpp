#include <iostream>
/*Altere o exercício anterior para cadastrar no máximo 20 clientes. Ao final do cadastro de
cada cliente deverá ser perguntado: "Novo Cliente (S/N)?". Caso o usuário escolha “N” ou
chegar nos 20 clientes, o programa deve mostrar um relatório de todos os clientes
cadastrados e finalizar. OBS: Deve-se utilizar um vetor de registros na solução.*/

#include <string>
using namespace std;

struct modeloCadastro{
string nome;
string endereco;
int identidade;
string telefone;
};
int main(){
  int i,cont=0;
  modeloCadastro ficha[20];
  char quero = 's';

    do{
      cout<<"Digite o nome do cliente:\n";
      getline(cin,ficha[i].nome);
      cout<<"Digite o endereco do cliente:\n";
      getline(cin,ficha[i].endereco);
      cout<<"Digite a identidade do cliente:\n";
      cin>>ficha[i].identidade;
      cout<<"Digite o telefone do cliente:\n";
      cin.ignore();
      getline(cin,ficha[i].telefone);
  cout<<"Gostaria de cadastrar um novo cliente? S- sim N-nao\n";
      cin>>quero;
      cin.ignore();
      cont++;
      i++;
  }while(cont<20&&quero=='s');

  for(i=0;i<cont;i++){
      cout<<"Cliente"<<i<<"\nNome: "<<ficha[i].nome<<"\nEndereco"    <<ficha[i].endereco<<"\nIdentidade: "              
  <<ficha[i].identidade<<"\nTelefone:"<<
  ficha[i].telefone<<"\n\n";   
  }  
}
