#include <iostream> 
#include <string> 

int main()
{
    int n1, n2;
    float r;
    char o;

    std::cout << "se mi dai 2 numeri interi e l'operazione te la eseguiro' " << std::endl
        << "inserisci il primo numero: ";
    std::cin >> n1;

    std::cout << "inserisci il secondo numero: ";
    std::cin >> n2;

    std::cout << "inserisci l'operazione (+, -, *, /): ";
    std::cin >> o;

    switch (o)
    {
    case '+':
    {
        r = n1 + n2;
        std::cout << "la somma dei due numeri e' " << r << std::endl;
        break;
    }
    case '-':
    {
        r = n1 - n2;
        std::cout << "la sottrazione tra i due numeri e' " << r << std::endl;
        break;
    }
    case '*':
    {
        r = n1 * n2;
        std::cout << "la moltiplicazione tra i due numeri e' " << r << std::endl;
        break;
    }
    case '/':
    {
        r = (float)n1 / (float)n2;
        std::cout << "la divisione tra i due numeri e' " << r << std::endl;
        break;
    }
    default:
        break;
    }

    return 0;
}