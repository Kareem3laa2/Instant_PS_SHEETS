#include <iostream>

#include <set>
using namespace std;

int main()
{
    int test, y, e, a, r;
    cin >> test;
    bool b = true;

    while (b)
    {
        int year = test + 1;
        while (b)
        {
            set<int> digits;

            y = year / 1000;
            e = (year % 1000) / 100;
            a = (year % 100) / 10;
            r = year % 10;

            digits.insert(y);
            digits.insert(e);
            digits.insert(a);
            digits.insert(r);

            if (digits.size() == 4)
            {
                cout << year;
                b = false;
            }
            else
            {
                year += 1;
            }
        }
    }
}