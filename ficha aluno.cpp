
#include <iostream>
using namespace std;

float media_aritmetica(float documento_1, float documento_2)
{
    return (documento_1 + documento_2) / 2;
}

int main()
{
    float matricula, prova_1, prova_2, trab_1, trab_2;
    
    cout << "Insira o numero da sua matricula: ";
    cin >> matricula;
    cout << "Insira as notas das provas 1 e 2: ";
    cin >> prova_1 >> prova_2;
    cout << "Insira as notas dos trabalhos 1 e 2: ";
    cin >> trab_1 >> trab_2;

    cout << "Matricula: " << matricula << endl;
    cout << "Media das provas: " << media_aritmetica(prova_1, prova_2) << endl;
    cout << "Media dos trabalhos: " << media_aritmetica(trab_1, trab_2) << endl;
    cout << "Media final: " << (prova_1 + prova_2 + trab_1 + trab_2)/4 << endl;
   
}
