/*Elabore um algoritmo preencha o cadastro de 10 alunos contendo matricula, nome,
endere�o e m�dia geral. Ap�s o preenchimento, deve ser somado o valor 0,5 �s m�dias de
todos os alunos que tiveram m�dias maiores que 5. Em seguida escreva o vetor final.*/

#include <iostream>
#include <string>
using namespace std;
struct modeloCadastro{
	float matricula;
	string nome;
	string endereco;
	float media;
};
int main(){
int i;
modeloCadastro cadastro[2];
	for(i=0;i<2;i++){
	cout<<"Digite o nome do aluno:\n";
	getline(cin,cadastro[i].nome);
	cout<<"Digite o endereco do aluno:\n";
	getline(cin,cadastro[i].endereco);
	cout<<"Digite a matricula do aluno:\n";
	cin>>cadastro[i].matricula;
	cout<<"Digite a media do aluno:\n";
	cin>>cadastro[i].media;
	cin.ignore();
		if(cadastro[i].media>5){
		cadastro[i].media = cadastro[i].media + 0.5;
		}
	}
	for(i=0;i<2;i++){
	cout <<"Nome:"<<cadastro[i].nome<<"\n"<<"Endereco:"<<cadastro[i].endereco<<"\n"<<"Matricula:"<<cadastro[i].matricula<<"\n"<<"Media:"<<cadastro[i].media<<"\n\n";
	}	
}
