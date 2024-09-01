#include <iostream>
#include <vector>
#include<windows.h>


class ConvertorPalabra
{
    std::vector<int> ListaPasos;
    std::string Palabra;

public:

    ConvertorPalabra(std::string _palabra)
    {
        Palabra = _palabra;
    }

    void ImprimirVector()
    {
        for (int i = 0; ListaPasos.size() > i; i++)
        {
            std::cout << ListaPasos[i];
        }

    }






};

int Pasos()
{
    int paso;

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
    std::string Palabra;

    std::cout << "Palabra:" ;
    std::cin >> Palabra;
    std::cout << std::endl;

    ConvertorPalabra palabraConvertida(Palabra);

    while (true)
    {
        try{

            int paso = Pasos();

        }
        catch(int paso){

            std::cout << paso << " no es un valor valido";
        }

        system("cls");

    }


    return 0;
}
