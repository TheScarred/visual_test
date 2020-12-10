#include <iostream>

bool on = true;

float Sum(float x, float y)
{
    std::cout << "AAAAA";
    return 0;
}

float Difference(float x, float y)
{
    return 0;
}

float Product(float x, float y)
{
    return 0;
}

float Quotient(float x, float y)
{
    return 0;
}

float Pow(float base, float exp)
{
    return 0;
}

float Root(float base, float root)
{
    return 0;
}

void SimpleCalculator() 
{
    short index;
    float x, y;

    std::cout << "\n\nElige la operacion que deseas realizar:\n\n1. Suma\n2. Resta\n3. Division\n4. Multiplicacion\n5. Potencia\n6. Raiz\n7. Salir\n\n";
    std::cin >> index;

    system("cls");

    switch (index)
    {
    case 1:
    {

        break;
    }
    case 2:
    {

        break;
    }
    case 3:
    {

        break;
    }
    case 4:
    {

        break;
    }
    case 5:
    {

        break;
    }
    case 6:
    {

        break;
    }
    case 7:
    {
        on = false;
        break;
    }
    default:
        break;
    }
}

int main()
{
    while (on)
        SimpleCalculator();
}

