#include <iostream>
using namespace std;
int missingElement(vector<int> arr)
{
    int size = arr.size();
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == mid + 1)
        {
            if (mid + 1 < size)
            {
                if (arr[mid] + 1 == arr[mid + 1])
                {
                    start = mid + 1;
                }
                else
                {
                    return arr[mid] + 1;
                }
            }
            else
            {
                return -1;
            }
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
    vector<int> arr = {2, 3, 4, 5, 6, 7, 8};
    int ans = missingElement(arr);
    cout << "Missing element is : " << ans << endl;
}