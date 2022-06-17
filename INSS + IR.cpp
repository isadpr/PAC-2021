
#include <iostream>
using namespace std;

int main()
{
    {
        float salario, inss, salarioliquido, valorIR;

        cout << "Entre com o valor do seu salario" << endl;
        cin >> salario;


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

            salarioliquido = salario - inss - valorIR;
        }


        cout << "salario bruto: " << salario << endl;
        cout << "valor pago de INSS: " << inss << endl;
        cout << "valor pago de imposto de renda: " << valorIR << endl;
        cout << "salario liquido: " << salarioliquido << endl;

    }
}