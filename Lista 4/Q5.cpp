/*Altere o exercício anterior para que, após o término de todos os cadastros, ou seja, quando
o usuário digitar "N" na pergunta para novo cliente ou quando preencher o vetor com 20
clientes, a tela seja ser limpa e seja exibida uma nova tela perguntando se o usuário quer ver
um relatório ou consultar um cliente individualmente. Se ele desejar ver o relatório, o
sistema deverá exibi-lo conforme questão anterior. Se ele escolher consultar um cliente
individualmente, o sistema deverá solicitar a identidade do cliente procurado, fazer uma
busca no vetor e informar seus dados caso o cliente esteja cadastrado. Se não existir cliente
cadastrado com aquela identidade, o sistema deverá informar “Cliente não cadastrado”. */

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
  int i,cont=0,op,identidade,pos;
  modeloCadastro ficha[20];
  char quero = 's';
  bool existe = false;
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
  system("cls");
  cout<<"Gostaria de ver um relatorio ou consultar um cliente individualmente? 1- relatorio 2-consulta\n";
  cin>>op;
switch(op){
	case 1: for(i=0;i<cont;i++){
      cout<<"Cliente"<<i<<"\nNome: "<<ficha[i].nome<<"\nEndereco"    <<ficha[i].endereco<<"\nIdentidade: "              
  <<ficha[i].identidade<<"\nTelefone:"<<
  ficha[i].telefone<<"\n\n";   
  } 
  	case 2: cout<<"Digite a identidade do cliente:\n";
  			cin>>identidade;
  			for(i=0;i<cont;i++){
  				if(identidade==ficha[i].identidade){
  					existe = true;
  					pos = i;
				  }
			  }
			if(existe == true){
				cout<<"Nome: "<<ficha[pos].nome<<"\n"<<"Endereco: "<<ficha[pos].endereco<<"\n"<<"Identidade: "<<ficha[pos].identidade<<"\n"<<"Telefone: "<<ficha[pos].telefone;
			}
			else
			cout<<"Cliente nao cadastrado!";
}
}
