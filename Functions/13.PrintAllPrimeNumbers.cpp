#include <iostream>
using namespace std;
bool isPrime(int number);
int main()
{
    int number;
    cout << "Enter number : " << endl;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
}

bool isPrime(int number)
{
    if (number == 1)
    {
        return 0;
    }
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}