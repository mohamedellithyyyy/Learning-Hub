#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
    int X;
    double P;
    cin >> X >> P;
 
    // Calculating the original price before discount
    double original_price = P / (1 - (X / 100.0));
 
    // Rounding up to two decimal places
    original_price = ceil(original_price * 100) / 100;
 
    // Output the result
    cout << fixed << setprecision(2) << original_price << endl;
 
    return 0;
}