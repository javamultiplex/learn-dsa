#include <iostream>
using namespace std;
int main()
{
    int number, count = 0;
    cout << "Enter the number" << endl;
    cin >> number;
    while (number != 0)
    {
        if (number & 1)
        {
            count++;
        }
        number = number >> 1;
    }
    cout << "Count of set bits : " << count << endl;
}