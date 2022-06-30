/*Suponha que você esteja realizando uma pesquisa e precise obter os seguintes dados de um
conjunto de n pessoas (n é informado pelo usuário): nome, sexo (1-M, 0-F), cor dos olhos,
altura, peso e data de nascimento. Elabore um algoritmo que realize a leitura desses dados
e imprima duas listagens. A primeira listagem deve conter todos os dados (exceto o sexo)
das mulheres e a outra deve conter todos os dados (exceto o sexo) dos homens. Ou seja,
vamos apenas criar uma listagem dos homens e outra das mulheres
*/

#include <iostream>
#include <string>
using namespace std;

struct modeloDados{
	string nome;
	int sexo;
	string olhos;
	float altura;
	float peso;
	string nascimento;
};

int main(){
	int i,tam,op;
	cout<<"Digite quantas pessoas serao cadastradas:\n";
	cin>>tam;
	cin.ignore();
	modeloDados pessoa[tam];
	
	for(i=0;i<tam;i++){
	
		cout<<"Digite o nome:\n";
		getline(cin,pessoa[i].nome);
		cout<<"Digite o sexo 1- M 2- F\n";
		cin>>pessoa[i].sexo;
		cin.ignore();
		cout<<"Digite a cor dos olhos:\n";
		getline(cin,pessoa[i].olhos);
		cout<<"Digite a altura:\n";
		cin>>pessoa[i].altura;
		cout<<"Digite o peso:\n";
		cin>>pessoa[i].peso;
		cin.ignore();
		cout<<"Digite a data de nascimento:\n";
		getline(cin,pessoa[i].nascimento);
	}
	system("cls");
	cout<<"Qual lista deseja ver? 1-Homens 2-Mulheres\n";
	cin>>op;

	switch(op){
		case 1: 
			for(i=0;i<tam;i++){
			if(pessoa[i].sexo==1){
			cout<<"Nome: "<< pessoa[i].nome<<"\n"<<"Cor dos olhos: "<<pessoa[i].olhos<<"\n"<<"Altura: "<<pessoa[i].altura<<"\n"<<"Peso: "<<pessoa[i].peso<<"\n"<<"Nascimento: "<<pessoa[i].nascimento<<"\n\n";
			}
		}
			
		break;
		
		case 2:
			for(i=0;i<tam;i++){
			if(pessoa[i].sexo==2){
			cout<<"Nome: "<< pessoa[i].nome<<"\n"<<"Cor dos olhos: "<<pessoa[i].olhos<<"\n"<<"Altura: "<<pessoa[i].altura<<"\n"<<"Peso: "<<pessoa[i].peso<<"\n"<<"Nascimento: "<<pessoa[i].nascimento<<"\n\n";
			}
		}	
		break;
		
	}
		
}
