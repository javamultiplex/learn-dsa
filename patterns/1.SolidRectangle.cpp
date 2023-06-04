#include <iostream>
using namespace std;
/*

***
***
***
***
***

*/
int main()
{
    int rows, cols;
    cin >> rows;
    cin >> cols;

    for (int i = 0; i < rows; i = i + 1)
    {
        for (int j = 0; j < cols; j = j + 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}