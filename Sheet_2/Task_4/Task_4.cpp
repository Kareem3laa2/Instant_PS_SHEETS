#include <iostream>
using namespace std;

int main()
{
    int K = 0, X = 0;
    cin >> K >> X;

    if (K * 500 < X)
    {
        cout << "No";
    }
    else if (K * 500 >= X)
    {
        cout << "Yes";
    }
}