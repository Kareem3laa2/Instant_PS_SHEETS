#include <iostream>
using namespace std;

int main()
{

    int rgb;
    int r;
    int g;
    int b;
    cin >> r >> g >> b;

    rgb = ((r * 100) + (g * 10) + b);

    if (rgb % 4 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}