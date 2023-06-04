#include <iostream>
using namespace std;
int main()
{
    int number, fact = 1;
    cout << "Enter the number" << endl;
    cin >> number;
    while (number != 0)
    {
        fact = fact * number;
        number--;
    }
    cout << "Factorial is : " << fact << endl;
}