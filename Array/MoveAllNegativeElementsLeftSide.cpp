#include <iostream>
using namespace std;
void moveNegative(int arr[], int n)
{
    int start = 0, end = n - 1, i = 0;
    while (i < end)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[start]);
            i++;
            start++;
        }
        else
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }
}
int main()
{
    int n = 5;
    int arr[] = {2, -3, -1, 5, -4};
    moveNegative(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}