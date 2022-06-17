
#include <iostream>
using namespace std;

int main()
{
    int n; // numero total de valores da sequencia
    int i = 0; // contador (começa com 0 e em cada passo soma 1)
    int anterior; // Numero lido na rodada anterior
    int atual; // Numero da rodada atual
    int tamanhoSequencia = 0; // Conta quantas sequencias consecutivas existem
    int tamanhoMaiorSequencia = 0; // Tamanho maior sequencia
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> atual;
        if (i == 0)
        {
            tamanhoSequencia=1;
        }
        else
        {
            if (atual>anterior)
            {
               tamanhoSequencia++;
            }
            else
            {
                tamanhoSequencia = 1;
            }
        }
        if (tamanhoSequencia > tamanhoMaiorSequencia)
        {
            tamanhoMaiorSequencia = tamanhoSequencia;
        }

        anterior = atual;
    }
    cout << tamanhoMaiorSequencia << endl;
    return 0;
}
