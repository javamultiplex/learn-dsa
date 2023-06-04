#include <iostream>
using namespace std;
int main()
{
    int number, rem;
    cout << "Enter number" << endl;
    cin >> number;
    while (number != 0)
    {
        rem = number % 10;
        cout << rem << endl;
        number = number / 10;
    }
}