#include <iostream>
using namespace std;

int main()
{
    string S1, S2, S3;

    cin >> S1;
    cin >> S2;
    cin >> S3;

    if (S1 != "ARC" && S2 != "ARC" && S3 != "ARC")
    {
        cout << "ARC";
    }
    else if (S1 != "AGC" && S2 != "AGC" && S3 != "AGC")
    {
        cout << "AGC";
    }
    else if (S1 != "AHC" && S2 != "AHC" && S3 != "AHC")
    {
        cout << "AHC";
    }
    else if (S1 != "ABC" && S2 != "ABC" && S3 != "ABC")
    {
        cout << "ABC";
    }

    return 0;
}
