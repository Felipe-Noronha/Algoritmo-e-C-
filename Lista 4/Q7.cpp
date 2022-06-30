/*Elabore um algoritmo que defina um registro capaz de armazenar as seguintes informações
sobre um determinado cliente de um banco: nome, CPF, RG, número da conta, data de
abertura da conta e saldo. Em seguida manipule um vetor com 15 registros de clientes, onde
cada registro é um elemento do tipo de dado definido. A manipulação do vetor é feita através
das seguintes opções: cadastrar cliente, imprimir os dados de um determinado cliente com
base no valor do campo CPF e imprimir todos os clientes com saldo negativo. */

#include <iostream>
#include <string>
using namespace std;

struct modeloFicha{
	string nome;
	int cpf;
	int rg;
	int nConta;
	int data;
	float saldo;
};

int main(){
	
	
	int i,tam=20,cpf,cont=0,op;
	modeloFicha ficha[tam];
	char quero,menu;
	string n[tam];
	
	do{
	
	cout<<"Digite 1- para cadastrar cliente\n Digite 2- para consultar cliente\n Digite 3- para consultar saldos negativos\n";
	cin>>op;
	cin.ignore();
	switch(op){
	case 1: do{
			cout<<"\nDigite o nome do cliente: ";
			getline(cin,ficha[i].nome);
			cout<<"\nDigite o CPF: ";
			cin>>ficha[i].cpf;
			cout<<"\nDigite o RG: ";
			cin>>ficha[i].rg;
			cout<<"\nDigite o numero da conta: ";
			cin>>ficha[i].nConta;
			cout<<"\nDigite a data da abertura da conta: ";
			cin>>ficha[i].data;
			cout<<"\nDigite o saldo da conta: ";
			cin>>ficha[i].saldo;
			cout<<"Gostaria de cadastrar mais? S-sim N -nao ";
			cin>>quero;
			cin.ignore();
			cont++;
		
			}while(quero=='s');
	break;
	
	
	case 2:	cout<<"\nDigite o cpf para busca: ";
			cin>>cpf;
	
			for(i=0;i<cont;i++){
				if(cpf==ficha[i].cpf){
				cout<<"Nome: "<<ficha[i].nome <<"\n" <<"CPF: "<<ficha[i].cpf<<"\n"<<"RG: "<<ficha[i].rg<<"\n"<<"Numero da conta: "<<ficha[i].nConta<<"\n"<<"Data da abertura da conta: "<< ficha[i].data <<"\n"<<"Saldo: "<<ficha[i].saldo<<"\n\n";
			}
					if(ficha[i].saldo<0){
					n[i] = ficha[i].nome;
					}
			}
	break;		
			
	case 3: cout<<"\nPessoas com saldo negativo:";
	for(i=0;i<cont;i++){
		if(ficha[i].saldo<0){
		n[i] = ficha[i].nome;
		}
		cout<<n[i];
	}
	break;
	
	}
	
	cout<<"\nGostaria de voltar ao menu? S-sim N-nao\n";
	cin>>menu;
	}while(menu=='s');
	
}
