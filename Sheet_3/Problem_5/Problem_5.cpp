#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string S;
    int L, R;
    cin >> L >> R;
    cin >> S;

    reverse(S.begin() + (L - 1), S.begin() + R);

    cout << S;

    return 0;
}
