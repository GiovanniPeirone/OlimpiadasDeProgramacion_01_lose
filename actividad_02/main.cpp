#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>

using namespace std;

string INTERCAMBIA(string texto, int letras)
{
    char letrasAray[letras];

    for (int i = 0 ; letras > i ; i++)
    {
        letrasAray[i] = texto.at(i);
    }

    for (int i = 0; texto.size() > i; i++)
    {

        if (letrasAray[i] > 96)
        {
            texto[i] = toupper(texto[i]);

        }
        if (letrasAray[i] < 91)
        {
            texto[i] = tolower(texto[i]);

        }
    }
    return texto;
}

string ROTA(string texto)
{
    reverse(texto.begin() , texto.end());
    return texto;
}

string BORRAULTI(string texto)
{
     texto.erase(0, 2);

     return texto;
}

int main()
{
    string texto = "hola";
    const int letras = texto.size();


    int instrucciones[3] = {1,2,3};

    cout << texto << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0 ; 3 > i ; i++)
    {
        if (instrucciones[i] == 1) //Camviar Mayusculas y Minusculas
        {
            texto = INTERCAMBIA(texto, letras);
        }
        if (instrucciones[i] == 2)
        {
            texto = ROTA(texto);
        }

        if (instrucciones[i] == 3)
        {
            texto = BORRAULTI(texto);
        }



    }

    cout << texto << endl;

    return 0;
}

