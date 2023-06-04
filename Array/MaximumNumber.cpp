#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 4, 3, 21, 9, 8, 17, 5, 6};
    int size = 9;
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Max number is : " << max << endl;
}