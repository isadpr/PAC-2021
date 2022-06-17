#include <iostream>
#include <cmath>
using namespace std;

float calculasemana(int dias_decorridos)
{
    if (dias_decorridos == 7)
    {
        return 1;
    }
    else
    {
        if (dias_decorridos > 7)
        {
            int semanas;
            float dias;
            semanas = (dias_decorridos / 7);
            dias = dias_decorridos % 7;

            return semanas; "semanas"; dias; "dias";
        }
        else // <7
        {
            return dias_decorridos;
        }
        
    }

}


int main()
{
    int dias_decorridos;
    cout << "Insira o numero de dias do evento: ";
    cin >> dias_decorridos;

    if (dias_decorridos == 7)
    {
        cout << "O evento tera: " << calculasemana(dias_decorridos) << " semana" << endl;
    }
    else
    {
        if (dias_decorridos > 7)
        {
            cout << "O evento tera: " << calculasemana(dias_decorridos) << " semanas e " << calculasemana(dias_decorridos) << " dias" << endl;
        }
        else // < 7
        {
            cout << "O evento tera: " << calculasemana(dias_decorridos) << " dias" << endl;
        }
    }
}
