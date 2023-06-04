#include <iostream>
using namespace std;
int main()
{
    int number, rem, reverse = 0;
    cout << "Enter number: " << endl;
    cin >> number;
    while (number != 0)
    {
        rem = number % 10;
        reverse = reverse * 10 + rem;
        number = number / 10;
    }
    cout << "Reverse is : " << reverse << endl;
}