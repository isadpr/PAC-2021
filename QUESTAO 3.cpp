#include <iostream>
using namespace std;

int maiorDivisor(int i) // nao pode ser o proprio numero!!
{
	int div = 0; 

	for (int cont = 1; cont < i; cont++) //contador
	{
		if (i % cont == 0) // i=numero inteiro
		{
			div = cont;
		}
	}
	return div;
}


int main()
{
	int i;
	cout << "Insira um numero inteiro: ";
	cin >> i;

	cout << "O maior divisor desse numero inteiro e (sem ser ele mesmo): " << maiorDivisor(i) << endl ;

	return 0;
}


