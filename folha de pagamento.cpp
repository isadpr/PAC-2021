
#include <iostream>
#include <cmath>

using namespace std;

float calculaIRPF(float salario)
{
	float valorIR; 

	if (salario < 1903.99)
	{

		valorIR = 0;
	}
	else
	{
		if (salario < 2826.66)
		{
			valorIR = salario * 0.075 - 142.80;
		}
		else
		{
			if (salario < 3751.06)
			{
				valorIR = salario * 0.15 - 354.80;
			}
			else
			{
				if (salario < 4664.68)
				{
					valorIR = salario * 0.225 - 636.13;
				}
				else
				{
					valorIR = salario * 0.275 - 869.36;
				}
			}
		}
	}

	return valorIR;
}


float calculaINSS(float salario)
{
	float inss, salariobase;

	if (salario > 6433.57)
	{
		salariobase = 6433.57;
		inss = salariobase * 0.14;
	}
	else
	{
		salariobase = salario;
	}


	if (salario < 1100.1)
	{
		inss = salario * 0.075;

	}
	else
	{
		if (salario < 2203.49)
		{
			inss = salario * 0.09;
		}
		else
		{
			if (salario < 3305.23)
			{
				inss = salario * 0.12;
			}
			else
			{
				if (salario < 6433.58)
				{
					inss = salario * 0.14;
				}

			}

		}

	}
	return inss; 
}


int main()
{
	float salario, valorIR, salarioLiquido, inss;
	cout << "Entre com o valor do seu salario:" << endl;
	cin >> salario;

	valorIR = calculaIRPF(salario);
	inss = calculaINSS(salario);

	salarioLiquido = salario - valorIR - inss;

	cout << "Salario Bruto: " << salario << endl;
	cout << "Imposto de Renda Retido: " << valorIR << endl;
	cout << "Valor do INSS: " << inss << endl;
	cout << "Salario Liquido: " << salarioLiquido << endl;

}
