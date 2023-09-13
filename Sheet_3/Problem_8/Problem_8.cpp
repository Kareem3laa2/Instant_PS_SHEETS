#include <iostream>
using namespace std;

int main()
{
    int abc;
    int def;
    cin >> abc >> def;

    int a = abc / 100;
    int b = (abc % 100) / 10;
    int c = abc % 10;

    int result_1 = a + b + c;

    int d = def / 100;
    int e = (def % 100) / 10;
    int f = def % 10;

    int result_2 = d + e + f;

    cout << max(result_1, result_2);
}