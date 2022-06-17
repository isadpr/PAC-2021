#include <iostream>
using namespace std;

int calcula_soma(int numero_1, int numero_2)
{
    return numero_1 + numero_2;
}

float calcula_media (int numero_1, int numero_2)
{
    return (calcula_soma(numero_1, numero_2)) / static_cast<float>(2);
}

int main()
{
    int numero_1, numero_2;

    cout << "Insira dois numeros inteiros: ";
    cin >> numero_1 >> numero_2;

    cout << " A soma dos numeros e: " << calcula_soma(numero_1, numero_2) << " e a media e: " << calcula_media(numero_1, numero_2) << endl;
}

