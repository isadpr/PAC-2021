#include <iostream>
using namespace std;

float misterio(float x0)
{
	float atual;
	float anterior=x0-((x0*x0)-x0)/(2*x0);
 
	for (int n = 1 ; n <= 100; n++)
	{
		atual = anterior - ((anterior * anterior) - x0) / (2 * anterior);
		anterior = atual;
	}

	return anterior;
}  

int main()
{
	float x0;
	cout << "Insira a variavel x0: ";
	cin >> x0;
	cout << "O valor dessa funcao e: " << misterio(x0) << "\n";  

	//A funcao determina a raiz quadrada do numero inserido (x0) 

	return 0;
}



