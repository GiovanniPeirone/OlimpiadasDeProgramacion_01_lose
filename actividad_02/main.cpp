#include <iostream>

using namespace std;

int main()
{
    char Letra = 65;
    char Letras[26][2];


    //mapear letras en el array
    int x = 0;
    cout << "--Lentras--";
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
    string NewTexto;

    cout << texto;
    for (int i = 0 ; texto.length() > i ; i++)
    {
        if (texto.lenght(i) < 91)
        {
            for (int a = 0 ; Letras.zize() > a; a++)
            {
                if (texto.lenght(i) == Letras[a][0])
                {
                    NewTexto += Letras[a][1]
                }
            }
        }
    }




    return 0;
}

