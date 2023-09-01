#include <iostream>
using namespace std;

int main()
{
    int w, k, n;

    // k cost of first banana
    // n the money he has
    // w number of banans he wants to buy
    cin >> k >> n >> w;
    int result = 0;

    for (int i = 1; i <= w; i++)
    {
        result += (i * k);
    }

    if ((n - result) >= 0)
    {
        cout << 0;
    }
    else
    {
        cout << (result - n);
    }
}