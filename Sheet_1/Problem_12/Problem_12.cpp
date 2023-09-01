#include <iostream>
using namespace std;

int main()
{

    // A is number of followers
    // B is number of people iam following
    int A, B;
    cin >> A >> B;

    int max_follow = 2 * A + 100;
    int follow_remaining = max_follow - B;

    cout << follow_remaining;
}