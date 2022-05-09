#include <iostream>
using namespace std;

int maiorDivisor(int i)
{
	int div = 0;

	for (int cont = 1; cont < i; cont++) //contador
	{
		if (i % cont == 0)
		{
			div = cont;
		}
	}
	return div;
}

int primo(int i)
{
	if (maiorDivisor(i) == 1) 
	{
		return 1; // o numero e primo 
	}
	else
	{
		return 0; // o numero nao e primo
	}

}

int main()
{
	int i;
	cout << "Insira um numero inteiro: ";
	cin >> i;

	cout << primo(i) << "\n";

	return 0;
}