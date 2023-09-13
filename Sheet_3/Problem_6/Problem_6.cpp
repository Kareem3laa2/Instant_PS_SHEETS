#include <iostream>
using namespace std;

int main()
{
    int N;
    string S, S1, S2;
    cin >> N;
    cin >> S;

    if (N = S.length())
    {
        S1 = S.substr(0, (N / 2));
        S2 = S.substr((N / 2), N);
    }
    if (S1 == S2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}