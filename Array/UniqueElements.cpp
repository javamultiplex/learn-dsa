#include <iostream>
using namespace std;
int findUniqueElement(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter size of an array" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements in an array" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int uniqueElement = findUniqueElement(arr);
    cout << "Unique element is : " << uniqueElement << endl;
}