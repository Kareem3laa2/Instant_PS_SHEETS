#include <iostream>
using namespace std;

int main()
{
    int n, counter = 0;
    string s;
    cin >> n;
    cin >> s;

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
