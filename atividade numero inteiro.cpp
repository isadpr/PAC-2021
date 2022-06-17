
#include <iostream>

using namespace std;

void imprimeDivisores (int n)
{
    int n, d;
    cin >> n;
    d = n;

    while (d >= 1)
    {
        if ( n % d == 0) // % é o resto da divisão inteira (MOD)
        {
            cout << d << " ";
        }
        d = d - 1; // d -= 1 ou d--
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    imprimeDivisores(n);
    return 0;
}