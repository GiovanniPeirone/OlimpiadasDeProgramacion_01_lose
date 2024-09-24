#include <iostream>

using namespace std;


int robosort(int muestras[])
{
    int p1 = 1;
    a = 0;
    int p2 = sizeof(muestras)/sizeof(int);
    int listaOrdenada[p2];
    for (int i = 0 ; p2 > i; i++)
    {
        if (muestras[i] == p1)
        {
            listaOrdenada.insert(a , p1)
            p1++;
        }
    }

    return listaOrdenada;
}

int main()
{
    int muestras[6] = { 3, 4, 5, 1, 6, 2 };
    muestras = robosort(muestras);
    cout << sizeof(muestras)/sizeof(int);

    return 0;
}
