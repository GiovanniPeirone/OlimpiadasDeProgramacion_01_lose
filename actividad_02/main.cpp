#include <iostream>
#include <vector>
#include<windows.h>


int Menu()
{
    int paso;
    std::cout << "-------------------------" << std::endl;
    std::cout << "1 - INVERTIR" << std::endl;
    std::cout << "2 - CHAUAGUS" << std::endl;
    std::cout << "3 - BORRA - n" << std::endl;
    std::cout << "4 - BORRAULTI" << std::endl;
    std::cout << "5 - INTERCAMBIA" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "6 - Calcular" << std::endl;
    std::cout << "7 - Salir" << std::endl;

    std::cout << "Paso:" ;
    std::cin >> paso;
    std::cout << std::endl;

    return paso;
}

int main()
{
    std::vector<int> ListaPasos;
    std::string Palabra;

    std::cout << "Palabra: ";
    std::cin >> Palabra;

    while (true)
    {
        std::cout << Palabra;
        for (int i = 0 ; ListaPasos.size() > i ; i++)
        {
            std::cout << ListaPasos[i] << std::endl;

        }
        try
        {
            int paso = Menu();

            if (paso == 7)
            {
                break;
            }
            if (paso == 6)
            {
                for (int i = 0 ; ListaPasos.size() > i ; i++)
                {
                    if (ListaPasos[i] == 1)
                    {

                    }
                    if (ListaPasos[i] == 2)
                    {

                    }
                    if (ListaPasos[i] == 3)
                    {

                    }
                    if (ListaPasos[i] == 4)
                    {

                    }
                    if (ListaPasos[i] == 5)
                    {

                    }
                }
            }
            else
            {
                ListaPasos.push_back(paso);
            }

        }
        catch (int paso)
        {
            std::cout << "Valor Invalido";
        }

        system("cls");
    }
    return 0;
}










/*
class ConvertorPalabra
{



public:

    ConvertorPalabra(std::string _palabra)
    {
        Palabra = _palabra;
    }

    void ImprimirVector()
    {
        std::cout << "---------Pasos Seleccionados----------";
        for (int i = 0; ListaPasos.size() > i; i++)
        {
            std::cout << ListaPasos[i];
        }
        std::cout << "--------------------------------------";

    }

    int agregarPaso(int Paso)
    {
        std::ListaPasos.assign(Paso) ;
    }




};




int main()
{
    std::string Palabra;

    std::cout << "Palabra:" ;
    std::cin >> Palabra;
    std::cout << std::endl;

    ConvertorPalabra palabraConvertida(Palabra);

    while (true)
    {
        palabraConvertida.ImprimirVector();
        try
        {
            int paso = Pasos();
            palabraConvertida.agregarPaso(Pasos);
        }
        catch(int paso)
        {
            std::cout << paso << " no es un valor valido";
        }



        system("cls");
    }


    return 0;
}
*/
