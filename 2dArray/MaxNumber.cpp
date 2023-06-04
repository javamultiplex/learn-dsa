#include <iostream>
using namespace std;
int getMax(int arr[][3], int rows, int cols)
{
    int max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 15, 6},
        {7, 8, 9}};
    cout << "Maximum number : " << getMax(arr, 3, 3) << endl;
}