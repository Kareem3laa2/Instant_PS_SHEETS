#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    if (x1 != x2 && x1 != x3)
    {
        x4 = x1;
    }
    else if (x2 != x1 && x2 != x3)
    {
        x4 = x2;
    }
    else
    {
        x4 = x3;
    }

    if (y1 != y2 && y1 != y3)
    {
        y4 = y1;
    }
    else if (y2 != y1 && y2 != y3)
    {
        y4 = y2;
    }
    else
    {
        y4 = y3;
    }

    cout << x4 << ' ' << y4;
}