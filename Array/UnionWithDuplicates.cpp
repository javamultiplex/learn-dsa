#include <iostream>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    vector<int> brr{7, 8, 1, 9, 10};
    vector<int> crr;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                brr[j] = INT_MIN;
            }
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        crr.push_back(arr[i]);
    }
    for (int i = 0; i < brr.size(); i++)
    {
        if (brr[i] != INT_MIN)
        {
            crr.push_back(brr[i]);
        }
    }

    for (auto value : crr)
    {
        cout << value << " ";
    }
    cout << endl;
}