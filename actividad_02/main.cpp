#include <iostream>

using namespace std;

int main()
{
    char Letra = 65;
    char Letras[26][2];


    //mapear letras en el array
    int x = 0;
    for (int i = 0; 26 > i; i++)
    {
        Letras[i][x] = Letra;
        Letra += 32;
        Letras[i][x+1] = Letra;
        Letra -= 31;
        cout << Letras[i][x];
        cout << Letras[i][x+1];
    }




    string texto = "ashdgaKASDJGHAKSJ_333sdjkhasSDALKJH";


    /*
    for (int i = 0 ; text.length() > i ; i++)
    {
        if (text.length(i) =< 90)
        {

        }
    }

    */


    return 0;
}

