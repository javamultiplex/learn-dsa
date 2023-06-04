#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 5, 6, 7};
    int sizea = 5;
    int brr[] = {1, 2, 9};
    int sizeb = 3;
    vector<int> crr;
    for (int i = 0; i < sizea; i++)
    {
        crr.push_back(arr[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        crr.push_back(brr[i]);
    }
    cout << "Final array : " << endl;
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;
}