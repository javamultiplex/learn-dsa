#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int ans = sizeof(arr) / sizeof(int);
    cout << ans << endl;
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    arr.push_back(10);
    arr.push_back(20);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr.pop_back();

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> brr(10);
    cout << "size of brr : " << brr.size() << endl;
    cout << "capacity of brr : " << brr.capacity() << endl;
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    vector<int> crr(10, -1);
    cout << "size of crr : " << crr.size() << endl;
    cout << "capacity of crr : " << crr.capacity() << endl;
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;

    vector<int> drr{10, 20, 30};
    cout << "size of drr : " << drr.size() << endl;
    cout << "capacity of drr : " << drr.capacity() << endl;
    for (int i = 0; i < drr.size(); i++)
    {
        cout << drr[i] << " ";
    }
    cout << endl;
}