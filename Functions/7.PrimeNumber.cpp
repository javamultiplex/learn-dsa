#include <iostream>
using namespace std;
bool isPrime(int number);
int main()
{
    int number;
    cout << "Enter number: " << endl;
    cin >> number;
    cout << "Number :" << number << " is prime : " << isPrime(number) << endl;
}

bool isPrime(int number)
{
    if (number == 1)
    {
        return false;
    }
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}