#include <iostream>
using namespace std;
/*

12345
1234
123
12
1

*/
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        int start = 1;
        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << start;
            start = start + 1;
        }
        cout << endl;
    }
}