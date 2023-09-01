#include <iostream>
using namespace std;

int main()
{
    int H, W, h, w;
    cin >> H >> W;
    cin >> h >> w;

    int row_cells = W;
    int col_cells = H;

    int remains = H * W - (h * row_cells) - (w * col_cells) + (w * h);
    cout << remains;

    return 0;
}