#include <iostream>
using namespace std;
//Dutch National Flag Algorithm
//TC - O(N)
//SC - O(1)
void moveNegative(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
        }
    }
}
int main()
{
    int n = 5;
    int arr[] = {-2, -3, -1, 5, -4};
    moveNegative(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}