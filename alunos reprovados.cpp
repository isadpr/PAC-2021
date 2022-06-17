
#include <iostream>
using namespace std;

float porcentagemreprovados(int total, int aprovados)
{
    float reprovados, porcentagemreprovados;
    reprovados = total - aprovados ;
    porcentagemreprovados = (reprovados/total) * 100;

    return porcentagemreprovados;
}



int main()
{
    int total, aprovados;

    cout << " Insira o numero total de alunos e o numero de aprovados: ";
    cin >> total >> aprovados;

    cout << " A porcentagem de alunos reprovados e: " << porcentagemreprovados(total, aprovados) << endl;
}



