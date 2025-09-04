#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    int min_val = min({A, B, C});
    int max_val = max({A, B, C});
    
    cout << min_val << " " << max_val << endl;
    
    return 0;
}
