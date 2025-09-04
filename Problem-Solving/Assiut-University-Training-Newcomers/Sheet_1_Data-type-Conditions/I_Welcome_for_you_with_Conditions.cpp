#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
    double A, B;
    cin >> A >> B;
    bool X = A>B;
    if (X==1 || A==B)
    {
        cout<<"Yes";
    }
    else if (X==0)
    {
        cout<<"No";
    }
    
    
 
    return 0;
}