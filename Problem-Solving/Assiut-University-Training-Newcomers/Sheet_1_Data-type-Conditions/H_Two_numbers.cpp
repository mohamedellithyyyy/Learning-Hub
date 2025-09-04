#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
    double A, B;
    cin >> A >> B;
    
    double division = A / B;
    
    int floor_result = static_cast<int>(floor(division));
    int ceil_result = static_cast<int>(ceil(division));
    int round_result = static_cast<int>(round(division));
    
    cout << "floor " << static_cast<int>(A) << " / " << static_cast<int>(B) << " = " << floor_result << endl;
    cout << "ceil " << static_cast<int>(A) << " / " << static_cast<int>(B) << " = " << ceil_result << endl;
    cout << "round " << static_cast<int>(A) << " / " << static_cast<int>(B) << " = " << round_result << endl;
    
    return 0;
}