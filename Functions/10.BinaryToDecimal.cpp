#include <iostream>
#include <cmath>
using namespace std;
int divisonMethod(int binary);
int main()
{
    int binary;
    cout << "Enter binary number : " << endl;
    cin >> binary;
    int decimal = divisonMethod(binary);
    cout << "Decimal number is : " << decimal << endl;
}

int divisonMethod(int binary)
{
    int decimal = 0, i = 0, rem;
    while (binary != 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * pow(2, i++);
        binary = binary / 10;
    }
    return decimal;
}