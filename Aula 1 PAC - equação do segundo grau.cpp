
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, x1, x2, delta;

    cout << "Entre com os valores de a,b,c" << endl;
    cin >> a >> b >> c;

    delta = b * b - 4 * a * c;
    x1 = (-b + delta) / (2 * a);
    x2 = (-b - delta) / (2 * a);

    if (delta >= 0)
    {
        if (delta == 0)
        {
            x1 = (-b + delta) / (2 * a);
            cout << "Unica raiz." << x1 << endl;
        }
        else //delta > 0 
        {
            x1 = (-b + delta) / (2 * a);
            x2 = (-b - delta) / (2 * a);
            cout << " O valor de x1 e " << x1 << " O valor de x2 e " << x2 << endl;
        }
    }
    else // delta < 0
    {
        cout << "Nao apresenta raiz real" << endl;
    }

}