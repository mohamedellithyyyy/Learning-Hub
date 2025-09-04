#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    long long max_katryoshka = 0;
    long long option1 = min(n / 2, k);
    long long remaining_eyes = n - 2 * option1;
    long long remaining_mouths = m;
    long long remaining_bodies = k - option1;
    long long additional = min(min(remaining_eyes, remaining_mouths), remaining_bodies);
    max_katryoshka = max(max_katryoshka, option1 + additional);
    long long x = min(n / 2, min(m, k));
    long long option2 = x;
    remaining_eyes = n - 2 * x;
    remaining_mouths = m - x;
    remaining_bodies = k - x;
    additional = min(min(remaining_eyes, remaining_mouths), remaining_bodies);
    max_katryoshka = max(max_katryoshka, option2 + additional);
    long long option3 = min(min(n, m), k);
    remaining_eyes = n - option3;
    remaining_mouths = m - option3;
    remaining_bodies = k - option3;
    additional = min(remaining_eyes / 2, remaining_bodies);
    max_katryoshka = max(max_katryoshka, option3 + additional);
    
    cout << max_katryoshka << endl;
    
    return 0;
}