#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    if (A > 0 && B == 0)
    {
        cout << "Gold";
    }
    else if (B > 0 && A == 0)
    {
        cout << "Silver";
    }
    else if (A > 0 && B > 0)
    {
        cout << "Alloy";
    }
}