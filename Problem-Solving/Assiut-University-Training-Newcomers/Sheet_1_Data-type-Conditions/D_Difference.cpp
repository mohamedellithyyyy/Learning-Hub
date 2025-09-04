#include <iostream>
using namespace std;
 
int main() 
{
    long long A,B,Z,D;
    cin>>A>>B>>Z>>D;
    long long Difference = A*B - Z*D;
    cout<< "Difference = "<<Difference;
    return 0;
}