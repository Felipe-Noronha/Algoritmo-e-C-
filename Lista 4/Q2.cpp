/*Elabore um algoritmo que
- Crie a estrutura tAnimal: Registro tAnimal:
nome: string
raca: string
idade: int
- Declare um vetor Animais (5 posições de tAnimal) e cadastre 8 animais;
- Verifique e escreva o nome do animal mais velho;
- Pergunte ao usuário se deseja consultar os animais cadastrados solicitando uma raça para
a busca. Se existir animal da raça procurada, informe seus dados (nome e idade);*/

#include <iostream>
#include <string>
using namespace std;
struct tAnimal{
	string nome;
	string raca;
	int idade;
};
int main(){
	tAnimal animais[2];
	int i,velho,cont = 0,pos;
  string raca;
	for(i=0;i<2;i++){
		cout<<"Digite o nome do animal:\n";
		getline(cin,animais[i].nome);
		cout<<"Digite a raca do animal:\n";
		getline(cin,animais[i].raca);
		cout<<"Digite a idade do animal:\n";
		cin>>animais[i].idade;
		cin.ignore();
		if(cont==0){
			velho = animais[i].idade;
			pos = i;
		}
		if(velho<animais[i].idade){
			velho = animais[i].idade;
			pos = i;
		}
		cont++;
	}
	cout<<"Animal mais velho: " << animais[pos].nome;
	cout<<"\nCaso deseje consultar um aniaml digite a raca:\n";
  getline(cin,raca);
  for(i=0;i<2;i++){ 
  if(raca==animais[i].raca){
    cout<<animais[i].nome<<"\n"<<animais[i].idade<<"\n";
  }
}
