#include <iostream>
using namespace std;

int main()
{

    float l, p, q, t;
    cin >> l >> p >> q;
    t = l / (p + q);

    cout << t * p;

    return 0;
}