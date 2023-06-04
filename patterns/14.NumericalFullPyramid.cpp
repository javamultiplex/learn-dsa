#include <iostream>
using namespace std;
/*
    1
   232
  34543
 4567654
567898765
*/
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << " ";
        }
        int start = row + 1;
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << start;
            start = start + 1;
        }
        start = row * 2;
        for (int col = 0; col < row; col = col + 1)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
    }
}