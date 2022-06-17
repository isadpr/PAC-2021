#include <iostream>

using namespace std;

float valor_garcom(float valorGastoCliente) //canel case
{
    return valorGastoCliente * 0.1;
}



int main()
{
    float valorGastoCliente;

    cout << "Entre com o valor gasto pelo cliente: ";
    cin >> valorGastoCliente;

    cout << "Valor total da conta: " << valorGastoCliente + valor_garcom(valorGastoCliente) << endl;

}

