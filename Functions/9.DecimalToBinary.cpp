#include <iostream>
#include <cmath>
using namespace std;
int divisionMethod(int decimal);
int bitwiseMethod(int decimal);
int main()
{
    int decimal;
    cout << "Enter Decimal Number : " << endl;
    cin >> decimal;
    int binary = bitwiseMethod(decimal);
    cout << "Binary number is : " << binary << endl;
}

int divisionMethod(int decimal)
{
    int binary = 0, i = 0, rem;
    while (decimal != 0)
    {
        rem = decimal % 2;
        binary = binary + rem * pow(10, i++);
        decimal = decimal / 2;
    }
    return binary;
}

int bitwiseMethod(int decimal)
{
    int binary = 0, i = 0, bit;
    while (decimal != 0)
    {
        bit = decimal & 1;
        binary = binary + bit * pow(10, i++);
        decimal = decimal >> 1;
    }
    return binary;
}