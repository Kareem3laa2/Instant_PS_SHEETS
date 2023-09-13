#include <iostream>
using namespace std;

int main()
{
    int A, B;
    char op;
    cin >> A >> op >> B;

    switch (op)
    {
    case '+':
        cout << A + B;
        break;
    case '-':
        cout << A - B;
        break;
    default:
        break;
    }
}