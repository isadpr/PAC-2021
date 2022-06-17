

#include <iostream>
using namespace std;

float calcula_media(int n_1, int n_2, int n_3)
{
   return float (n_1 + n_2 + n_3) / 3 ;

}

int main()
{
	int n_1, n_2, n_3;

	cout << "Insira tres numeros inteiros: ";
	cin >> n_1 >> n_2 >> n_3;

	cout << "A media aritmetica e: " << calcula_media(n_1, n_2, n_3) << endl;

}

