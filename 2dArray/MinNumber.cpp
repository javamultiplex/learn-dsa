#include <iostream>
using namespace std;
int getMin(int arr[][3], int rows, int cols)
{
    int min = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main()
{
    int arr[3][3] = {
        {10, 2, 3},
        {4, 15, 6},
        {7, 8, 9}};
    cout << "Minimum number : " << getMin(arr, 3, 3) << endl;
}