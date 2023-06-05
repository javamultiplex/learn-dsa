#include <iostream>
using namespace std;
int firstRepeated(int arr[], int n)
{
    int count;
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    cout << firstRepeated(arr, 7) << endl;
}