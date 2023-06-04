#include <iostream>
using namespace std;
int getMajorityElement(vector<int> arr)
{
    int n = arr.size();
    int count;
    for (int i = 0; i < n; i++)
    {
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
            if (count > n / 2)
            {
                return arr[i];
            }
        }
    }
    return INT_MIN;
}
int main()
{
    vector<int> arr{2, 2, 1, 1, 1, 1, 2};
    cout << "Majority element : " << getMajorityElement(arr) << endl;
}