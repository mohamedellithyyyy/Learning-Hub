#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int last_digit = N % 10;          // last digit
    int second_last_digit = (N / 10) % 10;  // second from right
    // Check divisibility safely
    bool check1 = (second_last_digit != 0 && last_digit % second_last_digit == 0);
    bool check2 = (last_digit != 0 && second_last_digit % last_digit == 0);

    if(check1 || check2){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}