
#include <iostream>
#include <cmath>

using namespace std;


float calculaimc (float peso, float altura)
{
    float imc ;

    imc = peso / (altura * altura);

    return imc;
}



int main()
{
    float peso, altura, imc;
   
    cout << " Insira o seu peso e a sua altura: ";
        cin >> peso >> altura;
   
    imc = calculaimc(peso, altura);

    cout << "Seu imc e: " << imc << endl;

}

