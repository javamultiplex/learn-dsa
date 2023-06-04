#include <iostream>
using namespace std;

void printDuplicates1(int arr[], int n)
{
    int freq[n + 1];
    memset(freq, 0, sizeof(freq)); // initialize the frequency array to 0
    bool flag = false;             // added a flag to check if there are no duplicate elements
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        if (freq[arr[i]] > 1)
        {
            freq[arr[i]] = INT_MIN;
            flag = true;
            cout << arr[i] << " ";
        }
    }
    if (!flag)
    {
        cout << "No duplicate elements";
    }
}

void printDuplicates2(int arr[], int n)
{
    int count;
    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
        count = 1;
        if (arr[i] != INT_MIN)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && arr[i] == arr[j])
                {
                    arr[j] = INT_MIN;
                    count++;
                }
            }
            if (count > 1)
            {
                cout << arr[i] << endl;
            }
        }
    }
}

int main()
{
    int n = 7;
    int arr[] = {3, 2, 1, 2, 2, 1, 3};
    // printDuplicates1(arr, n);
    printDuplicates2(arr, n);
    return 0;
}