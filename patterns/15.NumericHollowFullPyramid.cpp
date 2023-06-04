#include <iostream>
using namespace std;
/*
    1
   1 2
  1   3
 1     4
1 2 3 4 5


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
        int start = 1;
        for (int col = 0; col < 2 * row + 1; col = col + 1)
        {
            if (row == 0)
            {
                cout << start;
            }
            else if (row == n - 1)
            {
                if (col % 2 == 0)
                {
                    cout << start;
                    start = start + 1;
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (col == 0)
                {
                    cout << start;
                }
                else if (col == 2 * row)
                {
                    cout << row + 1;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}