#include <iostream>
using namespace std;
 
int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
 
    long long x = a + b - c;
    long long y = a + b * c;
    long long z = a - b + c;
    long long e = a - b * c;
    long long w = a * b + c;
    long long q = a * b - c;
 
    if (x == d || y == d || z == d || e == d || q == d || w == d) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}
