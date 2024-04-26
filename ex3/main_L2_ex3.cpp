#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float n1, n2;
	n1=n2=0;
	cout<<"Ordenador de numeros\n";
	cout<<"Digite um primeiro numero\n";
	cin>>n1;
	cout<<"Digite um segundo numero\n";
	cin>>n2;
	if (n1>=n2){
		if (n1>n2){
			cout<<"A ordem crescente dos numeros eh: "<<n1<<" "<<n2<<"\nA ordem decrescente dos numeros eh: "<<n2<<" "<<n1;
		} else {
			cout<<"Os numeros "<<n1<<" e "<<n2<<" sao iguais";
		}
	} else {
		cout<<"A ordem crescente dos numeros eh: "<<n2<<" "<<n1<<"\nA ordem decrescente dos numeros eh: "<<n1<<" "<<n2;
	}
	
	
	
	return 0;
}
