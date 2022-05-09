#include <iostream>
using namespace std;

int primo(int num)  
{
	int div = 0;

	for (int i = 1; i <= num; i++) 
	{
		if (num % i == 0)
		{
			div++;
		}
	}
	if (div == 2) // dois divisores (um e ele mesmo)
	{
		// numero primo!
		return num;
	}
	return 0; 
}

int main()
{
	int num;
	int conj[10];
	int somaPrimos = 0;

	cout << "Insira, um por um, dez numeros inteiros \n";

	for (int i = 0; i < 10; i++)
	{
		cout << "INSIRA UM NUMERO AQUI: ";
		cin >> conj[i];
		num = conj[i];
		somaPrimos = somaPrimos + primo(num);
	}

	cout << "\n";
	cout << "O somatorio dos numeros primos desse conjunto e: " << somaPrimos << "\n";

	return 0;
}
