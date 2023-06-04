#include <iostream>
using namespace std;
void transpose(int arr[][3], int brr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            brr[j][i] = arr[i][j];
        }
    }
}

void print(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    cout << "Before transpose: " << endl;
    print(arr, 3, 3);
    int brr[3][3];
    transpose(arr, brr, 3, 3);
    cout << "After transpose: " << endl;
    print(brr, 3, 3);
}