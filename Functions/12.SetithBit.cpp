#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number, i;
    cout << "Enter number: " << endl;
    cin >> number;
    cout << "Enter i: " << endl;
    cin >> i;
    int mask = 1 << i;
    int result = number | mask;
    cout << result << endl;
}
