#include <iostream>
using namespace std;

// 10 5 2 2 3 4 4 4 4 1 1

int main()
{
    int n; // numero total de valores da sequencia
    int i = 0; // contador (começa com 0 e em cada passo soma 1)
    int anterior; // Numero lido na rodada anterior
    int atual; // Numero da rodada atual
    int contadorSequencias = 0; // Conta quantas sequencias consecutivas existem
    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> atual;
        if (i == 0)
        {
            contadorSequencias++;
        }
        else
        {
            if (atual != anterior)
            {
                contadorSequencias++;
            }
        }
        anterior = atual;
    }
    cout << contadorSequencias << endl;
    return 0;
}

///////////
int main()
{
    int n = 10;
    // int i = 0
    // while(i<n)
    // {
    //          faço alguma coisa
    // }
    for (int i = 0, i < n; i++)
    {
        // faço alguma coisa 
    }

}