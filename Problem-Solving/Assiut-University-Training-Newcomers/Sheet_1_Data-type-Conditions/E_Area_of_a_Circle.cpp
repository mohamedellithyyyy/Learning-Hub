#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;
 
int main() 
{
    const double pi = 3.141592653; 
    double radius; 
    cin >> radius;
    double area = pi * pow(radius, 2);
    cout << fixed << setprecision(9) << area; 
    return 0;
}