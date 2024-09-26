#include <iostream>

using namespace std;

int main()
{
    div_t resultado;


    const int NumeroDeResiduos = 4; //NumeroDeResiduos
    int base = 10; //BASE
    int numero = 6; //NUMERO

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
