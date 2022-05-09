#include <iostream>
using namespace std;

int anobissexto(int ano)
{
    // a cada 400 anos é bissexto
    if (ano % 400 == 0)
    {
        return 1;
    }
    else
    {
        // a cada 100 anos não é bissexto
        if (ano % 100 == 0)
        {
            return 0;
        }
        else
        {
            // a cada 4 anos é bissexto
            if (ano % 4 == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}


int conferirDiaDeAcordoComMes(int dia, int mes, int ano)
{
    int diaMin = 01;
    int diaMax = 31;

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        diaMax = 30;
    }

    if (mes == 2)
    {
        diaMax = 28 + anobissexto(ano);
    }

    if (dia <= diaMax && dia >= diaMin) //nao existe dia 0
    {
        // dia valido
        return 1;
    }
    else
    {
        // dia invalido
        return 0;
    }
}


int conferirMes(int mes)
{
    int mesMaximo = 12;
    int mesMinimo = 1;

    if (mes <= mesMaximo && mes >= mesMinimo)
    {
        // dia valido
        return 1;
    }
    else
    {
        // dia invalido
        return 0;
    }
}

int conferirAno(int ano)
{
    int anoMaximo = 9999;
    int anoMinimo = 0001;
    if (ano <= anoMaximo && ano >= anoMinimo)
    {
        //ano valido
        return 1;
    }
    else
    {
        //ano invalido
        return 0;
    }
}

int main()
{
    int data;
    int dia;
    int mes;
    int ano;

    cout << "Insira um numero inteiro com 8 digitos: ";
    cin >> data;

    // calcular dia
    dia = data / 1000000;

    // calcular mes
    mes = (data / 10000) % 100;

    // calcular ano
    ano = data % 10000;

    cout << dia << "\n";
    cout << mes << "\n";
    cout << ano << "\n";

    cout << "\n";

    if (conferirDiaDeAcordoComMes(dia, mes, ano) == 1 && conferirMes(mes) == 1 && conferirAno(ano) == 1)
    {
        cout << "Data valida!";
    }
    else
    {
        cout << "Data invalida!";
    }
    cout << "\n";

    return 0;
}
