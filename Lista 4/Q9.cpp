/*Crie um tipo registro chamado Endereco que contenha os campos Rua (string), Numero (int),
Bairro (string), Cidade (string), Estado (string). Em seguida declare uma variável do tipo
Endereco. Crie outro tipo registro chamado Pessoa que tenha os campos Nome (string),
Ender (Endereco), Telefone (string) e Idade (int).
- Declare um vetor pessoas com 10 posições do tipo Pessoa e leia seus dados;
- Faça uma busca por bairro e escreva os nomes de todos que moram no bairro informado.*/

#include <iostream>
#include <string>
using namespace std;

struct endereco{
	string rua;
	int numero;
	string bairro;
	string cidade;
	string estado;
};

struct pessoa{
	string nome;
	endereco ender;
	string telefone;
	int idade;
};

int main(){
	
	int i,tam=2;
	pessoa v[tam];
	string bairro;
	
	for(i=0;i<tam;i++){
		cout<<"Digite seu nome:\n";
		getline(cin,v[i].nome);
		cout<<"Digite seu estado:\n";
		getline(cin,v[i].ender.estado);
		cout<<"Digite sua cidade:\n";
		getline(cin,v[i].ender.cidade);
		cout<<"Digite seu bairro:\n";
		getline(cin,v[i].ender.bairro);
		cout<<"Digite sua rua:\n";
		getline(cin,v[i].ender.rua);
		cout<<"Digite seu numero:\n";
		cin>>v[i].ender.numero;
		cin.ignore();
		cout<<"Digite seu telefone:\n";
		getline(cin,v[i].telefone);
		cout<<"Digite sua idade:\n";
		cin>>v[i].idade;
		cin.ignore();
	}
	
	cout<<"\nDigite o bairro:\n";
	cin>>bairro;
	
	for(i=0;i<tam;i++){
		if(bairro==v[i].ender.bairro){
			cout<<v[i].nome<<"\n";
		}
	}
	
}
