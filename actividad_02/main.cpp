#include <iostream>

using namespace std;

int main()
{
    char Letra = 65;
    char Letras[26][2];


    //mapear letras en el array
    int x = 0;
    cout << "--Lentras--" << endl;
    for (int i = 0; 26 > i; i++)
    {
        Letras[i][x] = Letra;
        Letra += 32;
        Letras[i][x+1] = Letra;
        Letra -= 31;
        cout << Letras[i][x];
        cout << Letras[i][x+1];
        cout << endl;
    }
    cout << endl;
    cout << "--------------" <<endl;
    string texto = "ashdgaKASDJGHAKSJsdjkhasSDALKJH";

    cout << texto << endl;
    for (int i = 0 ; texto.size() > i ; i++)
    {
        if (texto.at(i) >= 97)
        {
            for(int a = 0 ; Letra > a ; a++)
            {
                if ( Letras[a][1] == texto.at(i))
                {
                    texto.at(i) = Letras[a][0];
                }
            }
        }

        if (texto.at(i) <= 90)
        {
            for(int a = 0; Letra > a; a++)
            {
                if ( Letras[a][0] == texto.at(i))
                {
                    texto.at(i) = Letras[a][1];
                }
            }
        }
    }

    cout << texto  << endl;


    return 0;
}

