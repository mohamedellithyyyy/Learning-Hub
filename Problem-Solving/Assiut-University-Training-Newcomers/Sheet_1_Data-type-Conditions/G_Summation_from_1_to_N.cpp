#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;
 
int main() 
{
    long long N; 
    cin>>N;
    long long summation = N * (N + 1) / 2;;
    cout<<summation;
    return 0;
}