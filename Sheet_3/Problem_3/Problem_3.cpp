#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;
    cin >> s;

    for (int i = 0; i <= s.length() - 1; i++)
    {
        if (s[i] == '1')
        {
            if (i % 2 == 0)
            {
                cout << "Takahashi";
                break;
            }
            else
            {
                cout << "Aoki";
                break;
            }
        }
        else
        {
            continue;
        }
    }

    return 0;
}
