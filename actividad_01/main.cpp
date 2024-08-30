#include <iostream>

using namespace std;

int main()
{
    div_t resultado;


    const int NumeroDeResiduos = 50; //NumeroDeResiduos
    int base = 2; //BASE
    int numero = 1000000000; //NUMERO

    int Residuos[NumeroDeResiduos] = {};


    for(int i = 0 ; NumeroDeResiduos > i; i++ )
    {

        resultado = div(numero,base);
        Residuos[i] = resultado.rem;

        numero = resultado.quot;

        cout << Residuos[i];

    }

    return 0;
}
