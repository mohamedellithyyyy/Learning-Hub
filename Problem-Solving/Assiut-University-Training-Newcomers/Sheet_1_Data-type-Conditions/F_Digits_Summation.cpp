#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;
 
int main() 
{
    long long x,y; 
    cin >> x>>y;
    long long last_digit_X = x%10;
    long long last_digit_Y = y%10;
    cout << last_digit_X+last_digit_Y; 
    return 0;
}