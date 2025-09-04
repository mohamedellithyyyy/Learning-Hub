#include <iostream>
 
using namespace std;
 
int main() {
    char C;
    cin >> C;
 
    // Increment the character to get the next alphabet
    char next_alphabet = C + 1;
 
    // If the character is 'z', wrap around to 'a'
    if (next_alphabet > 'z')
        next_alphabet = 'a';
 
    // Output the next alphabet
    cout << next_alphabet << endl;
 
    return 0;
}