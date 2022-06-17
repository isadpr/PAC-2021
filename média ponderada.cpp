#include <iostream>
using namespace std;

float calc_pond(float nota_1, float nota_2)
{
    float mediapond;
    mediapond = (nota_1 * 2 + nota_2 * 4) / 6;

    return mediapond;
}

int main()
{
    float nota_1, nota_2;
    cout << "Insira as notas da prova 1 e 2: ";
    cin >> nota_1 >> nota_2;

    cout << "a sua media e" << calc_pond(nota_1, nota_2) << endl;

}

