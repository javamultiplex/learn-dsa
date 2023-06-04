#include <iostream>
using namespace std;
/*

1
12
123
1234
12345

*/
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        int start = 1;
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << start;
            start = start + 1;
        }
        cout << endl;
    }
}