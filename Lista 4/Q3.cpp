/*Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias
para o cliente são: identidade, nome, endereço e telefone. OBS: Deve ser usada uma
estrutura de registro para a construção deste cadastro.*/

#include <iostream>
#include <string>
using namespace std;

struct modeloCadastro{
string nome;
string endereco;
int identidade;
string telefone;
};
int main(){
  int i;
  modeloCadastro ficha[2];
  for(i=0;i<2;i++){
    cout<<"Digite o nome do cliente:\n";
    getline(cin,ficha[i].nome);
    cout<<"Digite o endereco do cliente:\n";
    getline(cin,ficha[i].endereco);
    cout<<"Digite a identidade do cliente:\n";
    cin>>ficha[i].identidade;
    cout<<"Digite o telefone do cliente:\n";
    cin.ignore();
    getline(cin,ficha[i].telefone);
  }

