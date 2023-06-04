#include <iostream>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 3, 4, 5, 6};
    vector<int> brr{3, 3, 4};
    vector<int> crr;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                brr[j] = INT_MIN;
                crr.push_back(element);
            }
        }
    }

    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;
}