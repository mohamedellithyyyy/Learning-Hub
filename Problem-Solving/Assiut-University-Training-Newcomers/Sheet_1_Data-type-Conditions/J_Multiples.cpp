#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
    double A, B;
    cin >> A >> B;
    double X = static_cast<int>(A)%static_cast<int>(B);
    double Y = static_cast<int>(B)%static_cast<int>(A);
    if (X==0 || Y ==0 )
    {
        cout<<"Multiples";
    }
    else if (X!=0)
    {
        cout<<"No Multiples";
    }
    
    
 
    return 0;
}