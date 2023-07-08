#include <iostream>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int size = arr.size();
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    vector<int> a{10, 20, 30, 40, 50};
    int target = 20;
    int index = binarySearch(a, target);
    if (index == -1)
    {
        cout << "Element " << target << " Not found" << endl;
    }
    else
    {
        cout << "Element " << target << " found at index " << index << endl;
    }
}