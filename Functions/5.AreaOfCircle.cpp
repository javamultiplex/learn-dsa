#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float radius, area;
    cout << "Enter radius of circle" << endl;
    cin >> radius;
    area = M_PI * radius * radius;
    cout << "Area is : " << area;
}