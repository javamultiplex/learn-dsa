#include <iostream>
using namespace std;
void binarySearchWithVector()
{
    vector<int> arr{10, 20, 30, 40, 50};
    int target = 40;
    int index = binary_search(arr.begin(), arr.end(), target);
    if (index == 0)
    {
        cout << "Element " << target << " Not found" << endl;
    }
    else
    {
        cout << "Element " << target << " found at index " << index << endl;
    }
}

void binarySearchWithArrray()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(int);
    cout << "size : " << size << endl;
    int target = 90;
    if (binary_search(arr, arr + size, target))
    {
        cout << "Element " << target << " found" << endl;
    }
    else
    {
        cout << "Element " << target << " not found" << endl;
    }
}

int main()
{
    //   binarySearchWithVector();
    binarySearchWithArrray();
}