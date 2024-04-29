#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int n1, resto;
	n1=resto=0;
	
	cout<<"Par ou impar?\n";
	cout<<"Digite um numero inteiro positivo\n";
	
	cin>>n1;
	
	//Valida se o número é positivo, caso não seja o programa se encerra
	if (n1>0){
		//Valida se o número é par ou impar
		resto = n1%2;
		if (resto == 0){
			cout<<"O numero digitado eh par";
		} else {
			cout<<"O numero digitado eh impar";
		}
	} else {
		cout<<"Voce deve digitar um numero inteiro positivo";
	}
	
	return 0;
	system("pause");
}
