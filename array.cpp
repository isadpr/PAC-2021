#include <iostream>
using namespace std;

void soma(float va[], float vb[], float vc[], int n)
{
	for (int i = 0; i<n; i++)
	{
		vc[i] = va[i] + vb[i];
	}
}

void imprimeVetor(float vc[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << vc[i] << " ";
	}
	cout << endl;
}

/* 
* 
 busca no vetor v o elemento procurado e retorna a posicao 
 ou -1 caso nao exista. O vetor tem n elementos.

*/

int busca(float v[], float procurado, int n)
{
	for (int i=0, i<)
}


int main()
{
	float va[] = { 10,20,30,40,50 };
	float vb[] = { 1,2,3,4,5,6 };
	int n = 6;
	soma(va, vb, vc, n);
	imprimeVetor(vc, n);
	cout << busca 

}

