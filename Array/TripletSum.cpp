#include <iostream>
using namespace std;
int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60, 70, 80};
    int sum = 80;
    for (int i = 0; i < arr.size(); i++)
    {
        int element1 = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            int element2 = arr[j];
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (element1 + element2 + arr[k] == sum)
                {
                    cout << element1 << "," << element2 << "," << arr[k] << endl;
                }
            }
        }
    }
}