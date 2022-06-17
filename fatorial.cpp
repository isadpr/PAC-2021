
#include <iostream>
using namespace std;


// int se( bool condicao, int x, int y) // bool = verdadeiro e falso
// {
//    if (condicao)
//    {
//        return x;
//    }
//    else
//    {
//        return y;
//    }
// }

int fatorial(int n)
{
    int resp = 1;
    int i = 2;
    while (i < n)
    {
        resp *= 1; // resp = resp * 1
        i++;
    }
    return resp;

}

int maiorDeTres(int a, int b, int c )
    {
       return a > b ? a > c ? a : c : b > c ? b : c;
    }

int maiorDeDois(int a, int b)
{
    return a > b ? a : b;
}

int fat(int n) //recursiva -> chama ela mesma
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fat(n - 1); 
    }
}
 



//int main()
// {
//    int a, b, c;
//
//    cin >> a >> b >> c;
//    cout << (a > b ? a > c ? a : c : b > c ? b : c) << endl; // operador ternário
//
//        return 0;
// }
