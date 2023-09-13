#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main()
{
    string s, x;
    cin >> s;
    cin >> x;

    reverse(s.begin(), s.end());

    if (s == x)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
