#include<iostream>
using namespace std;

int main()
{
    int i, j, m, n, ut = 0, lt = 0, A[10][10];
    m = 3;
    n = 3;

    cout << "Insira os elementos de uma matriz 10x10: ";

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> A[i][j];

            if (j > i && A[i][j] != 0)
            {
                ut = 1;
            }
            if (j < i && A[i][j] != 0)
            {
                lt = 1;
            }
        }
    }

    if (ut == 0 || lt == 0)
    {
        cout << "A matriz e triangular. \n";
    }
    else
    {
        cout << "A matriz nao e triangular. \n";
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}