#include <iostream>
using namespace std;

int main()
{
	int somaMulher = 0;
	int somaHomem = 0;
	int somaTotal = 0;
	int numeroDeLinhas;
	cout << "Insira o numero de linhas que ira utilizar: ";
	cin >> numeroDeLinhas;
	cout << "\n";

	for (int i = 0; i < numeroDeLinhas; i++)
	{
		int mes;
		int ano;
		int homensVacinados;
		int mulheresVacinadas;

		cout << "Insira o numero do mes, o ano, o numero de homens vacinados e o numero de mulheres vacinadas, respectivamente:\n";
		cin >> mes >> ano >> homensVacinados >> mulheresVacinadas;

		int somaMes = homensVacinados + mulheresVacinadas;
		cout << "O total de vacinados nesse mes e: " << somaMes << "\n";
		cout << "\n";
		
		somaHomem = somaHomem + homensVacinados;
		somaMulher = somaMulher + mulheresVacinadas;
		somaTotal = somaHomem + somaMulher;
	}

	cout << "\n";
	cout << "O total de mulheres vacinadas no periodo informado e de: " << somaMulher << "\n";
	cout << "O total de homens vacinados no periodo informado e de: " << somaHomem << "\n";
	cout << "O total de pessoas vacinadas no periodo informado e de: " << somaTotal << "\n";

	return 0;
}