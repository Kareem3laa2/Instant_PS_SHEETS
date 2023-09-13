#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, h, rWidth = 0;
    cin >> n >> h;

    vector<int> Myvector;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;

        Myvector.push_back(input);
    }

    for (int i = 0; i < n; i++)
    {
        if (Myvector[i] <= h)
        {
            rWidth += 1;
        }
        else
        {
            rWidth += 2;
        }
    }
    cout << rWidth;
}