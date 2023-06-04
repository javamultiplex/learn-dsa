#include <iostream>
using namespace std;
int main()
{
    int digits[] = {4, 5, 6, 9};
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        ans = ans * 10 + digits[i];
    }
    cout << "The answer is : " << ans << endl;
}