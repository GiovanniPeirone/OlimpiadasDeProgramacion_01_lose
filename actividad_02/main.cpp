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

string BORRAULTI(string texto)
{
    if (!texto.empty())
    {  // Verifica si la cadena no está vacía
        texto.erase(texto.size() - 1);
        return texto;
    } else {
        return texto;
    }
}

string BORRAPRI(string texto)
{
    if (!texto.empty()) {
        texto.erase(0, 1);  // Elimina el primer carácter
        return texto;
    } else {
        cout << "La cadena está vacía, no se puede eliminar el último carácter." << std::endl;
        return texto;
    }
}

string DUP(string texto)
{
    texto += texto;
    return texto;
}

string ROTA(string texto)
{
    char priLetra = texto[0];

    texto = texto + priLetra;

    texto.erase(0 , 1);

    return texto;
}

string INVERTIR(string texto)
{
    reverse(texto.begin() , texto.end());
    return texto;
}

string AGREGA(string texto, string agrega)
{
    texto = texto + agrega;

    return texto;
}

string BORRA(string texto, size_t borra)
{
    if (borra < texto.size()) {

        texto.erase(borra, 1);  // Elimina el carácter en la posición i

    }
    return texto;
}

int  main()
{
    string texto = "CACEROLAcasaLimonXYZagusiagus";
    const int letras = texto.size();
    const int CantidadDePasos = 8;
    int instrucciones[CantidadDePasos] = {6,6,8,2,6,2,1,6};
    //Dentro van los Pasos en el orden deseado
    /*
    1 - INTERCAMBIA
    2 - BORRAULTI
    3 - BORRAPRI
    4 - DUP
    5 - ROTA
    6 - INVERTIR
    7 - AGREGA (Linea 166 se elije la palabra)
    8 - BORRA (Linea 164 se elije el numero)
    */

    /*
    Falta:
        CHAU-α:
        INVERTIR-i-j:
        CHAUAGUS:
    */


    cout << texto << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0 ; 1 > i ; i++)
    {
        if (instrucciones[i] == 1) //Camviar Mayusculas y Minusculas
        {
            texto = INTERCAMBIA(texto, letras);
        }

        if (instrucciones[i] == 2)
        {
            texto = BORRAULTI(texto);
        }

        if (instrucciones[i] == 3)
        {
            texto = BORRAPRI(texto);
        }

        if (instrucciones[i] == 4)
        {
            texto = DUP(texto);
        }

        if (instrucciones[i] == 5)
        {
            texto = ROTA(texto);
        }

        if (instrucciones[i] == 6)
        {
            texto = INVERTIR(texto);
        }

        if (instrucciones[i] == 7)
        {
            texto = AGREGA(texto, "pepepipo");
        }

        if (instrucciones[i] == 8)
        {
            texto = BORRA(texto, 5);
        }

    }

    cout << texto << endl;

    return 0;
}

