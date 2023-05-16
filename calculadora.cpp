#include <iostream>

using namespace std;

int main()
{
    float n1, n2, total;
    char operador;
    total = 0;

    while (total == 0)
    {
        cout << "digite um número:\n";
        cin >> n1;
        cout << "digite outro número: \n";
        cin >> n2;
        cout << "escolha uma das operações: + , - , *  e / \n";
        cin >> operador;
        if (operador == '+')
        {
            total = n1 + n2;
        }
        else if (operador == '-')
        {
            total = n1 - n2;
        }
        else if (operador == '*')
        {
            total = n1 * n2;
        }
        else if (operador == '/')
        {
            total = n1 / n2;
        }

        cout << "resultado" << total << "\n";
    }
}