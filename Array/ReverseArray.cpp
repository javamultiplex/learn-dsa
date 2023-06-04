#include <iostream>
using namespace std;
void swap1(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void swap2(int arr[], int i, int j)
{
    arr[i] = arr[i] + arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i] - arr[j];
}

void swap3(int arr[], int i, int j)
{
    arr[i] = arr[i] ^ arr[j];
    // 0001 ^ 1000 -> 1001
    arr[j] = arr[i] ^ arr[j];
    // 1001 ^ 1000 -> 0001
    arr[i] = arr[i] ^ arr[j];
    // 1001 ^ 0001 -> 1000
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        // swap(arr[start], arr[end]);
        // swap1(arr, start, end);
        // swap2(arr, start, end);
        swap3(arr, start, end);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}