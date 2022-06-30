/*Uma empresa tem para cada um dos seus 200 funcionários uma ficha contendo o nome,
número de horas trabalhadas e o número de dependentes. Considerando que:
- A empresa paga 12 reais por hora e 40 reais por dependentes;
- Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR.
Elabore um algoritmo que declare o registro do funcionário, e leia seus dados enquanto o
usuário desejar cadastrar (não permitindo o cadastro de mais de 200 funcionários). Após a
leitura, escreva o nome, salário bruto, os valores descontados para cada tipo de imposto e
qual o salário líquido de cada um dos funcionários que foram cadastrados.
*/

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
	
	
	int i,tam=200,cpf,cont=0;
	modeloFicha ficha[tam];
	char quero;
	
	do{
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
		cont++;
		
	}while(quero=='s');
	
	system("cls");
	
	cout<<"Digite o cpf para busca: ";
	cin>>cpf;
	
	for(i=0;i<cont;i++){
		if(cpf==ficha[i].cpf){
			cout<<"Nome: "<<ficha[i].nome <<"\n" <<"CPF: "<<ficha[i].cpf<<"RG: "<<ficha[i].rg<<"Numero da conta: "<<ficha[i].nConta<<"Data da abertura da conta: "<< ficha[i].data <<"Saldo: "<<ficha[i].saldo<<"\n\n";
		}
	}
	
}
