#include <iostream>
using namespace std;

int main()
{

    int kilos;
    cin >> kilos;

    if (kilos > 2 && kilos % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
