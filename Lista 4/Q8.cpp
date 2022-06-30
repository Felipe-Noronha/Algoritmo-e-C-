/*Um provedor de acesso � Internet mant�m o seguinte cadastro de clientes: c�digo do
cliente, e-mail, n�mero de horas de acesso, p�gina (�S�-sim ou �N�-n�o). Elaborar um
algoritmo que insira um conjunto de registros (m�ximo 500), calcule e mostre um relat�rio
contendo o valor a pagar por cada cliente, sabendo-se que as primeiras 20 horas de acesso
custam R$ 35,00 e as horas que excederam tem o custo de R$ 2,50 por hora. Para os clientes
que t�m p�gina, adicionar R$ 40,00. */

#include <iostream>
#include <string>
using namespace std;

struct modeloCadastro{
	int codigo;
	string email;
	int horas;
	char pagina;
};

int main(){
	int i,tam =500,cont=0;
	int custo[tam];
	modeloCadastro ficha[tam];
	char quero;
	do{
		cout<<"Digite o codigo do cliente:\n";
		cin>>ficha[i].codigo;
		cin.ignore();
		cout<<"Digite o email:\n";
		getline(cin,ficha[i].email);
		cout<<"Digite as horas de acesso:\n";
		cin>>ficha[i].horas;
		cout<<"Possui pagina? S-sim N-nao\n";
		cin>>ficha[i].pagina;
		i++;
		cont++;
		cout<<"Quer adicionar mais clientes? S-sim N- nao\n";
		cin>>quero;
		
	}while(i<tam&&quero=='s');
	
	for(i=0;i<tam;i++){
		if(ficha[i].horas<=20){
			custo[i] = (ficha[i].horas * 35);
		}
		else{
			custo[i] = ((ficha[i].horas - 35) * 2.5);
		}
		if(ficha[i].pagina == 's'){
			custo[i] = custo[i] + 40;
		}
		
	}
	
	for(i=0;i<cont;i++){
		cout<<"Cliente"<<i<<"Custo: "<<custo[i]<<"\n\n";
	}
	
}
