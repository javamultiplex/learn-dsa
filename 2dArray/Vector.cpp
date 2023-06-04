#include <iostream>
using namespace std;
void print(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void method1()
{
    vector<vector<int>> arr;
    vector<int> a{1, 2, 3};
    vector<int> b{4, 5, 6};
    vector<int> c{7, 8, 9};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    print(arr);
}

void method2()
{
    int rows = 4;
    int cols = 10;
    vector<vector<int>> arr(rows, vector<int>(cols, 101));
    print(arr);
}

int main()
{
    // method1();
    method2();
}