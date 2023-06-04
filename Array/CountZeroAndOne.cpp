#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 0, 1, 1, 1, 1, 0, 1};
    int size = 8;
    int countOne = 0;
    int countZero = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
        if (arr[i] == 1)
        {
            countOne++;
        }
    }
    cout << "Number of 1's " << countOne << endl;
    cout << "Number of 0's " << countZero << endl;
}