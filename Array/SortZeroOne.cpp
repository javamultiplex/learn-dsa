#include <iostream>
using namespace std;
int main()
{
    vector<int> arr{0, 1, 1, 0, 0, 1, 0, 0};
    int low = 0;
    int high = arr.size() - 1;
    while (low < high)
    {
        if (arr[low] == 0)
        {
            low++;
        }
        else if (arr[high] == 1)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
        }
    }

    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;
}