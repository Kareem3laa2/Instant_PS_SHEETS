#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    if (d1 < d2)
    {
        int r1 = d1 + d1 + d2 + d2;
        int r2 = d1 + d3 + d3 + d1;
        int r3 = d1 + d3 + d2;
        cout << min(min(r1, r2), r3);
    }
    else
    {
        int r1 = d1 + d1 + d2 + d2;
        int r2 = d2 + d3 + d3 + d2;
        int r3 = d1 + d2 + d3;
        cout << min(min(r1, r2), r3);
    }
}