#include <iostream>
using namespace std;
int firstOccurrence(vector<int> arr, int target)
{
    int size = arr.size();
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}
int main()
{
    vector<int> arr = {10, 20, 20, 20, 20, 20, 30, 30, 30, 30, 30, 40, 50};
    int target = 30;
    int index = firstOccurrence(arr, target);
    cout << "Element " << target << " first occurrence is " << index << endl;
}