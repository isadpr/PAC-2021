// 

#include <iostream>
using namespace std;

int main()
{
    for (int j = 1; j <= 10; j++)
    {
        cout << " Tabuada do " << j << endl;
        cout << "------------------------------------------------------" << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << j << " * " << i << " = " << i * j << endl;
        }
        cout << endl;
    }
    return 0;
}

