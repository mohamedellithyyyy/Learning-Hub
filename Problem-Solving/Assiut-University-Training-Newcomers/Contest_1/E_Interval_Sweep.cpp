#include <iostream>
using namespace std;
 
int main() {
    int a, b;
    cin>>a>>b;
    int x = a+1;
    int y= a-1;
    if (x==b || y==b){cout<<"YES";}
    else if (a!=0&&a==b||y==b){cout<<"YES";}
    else{cout<<"NO";}
 
    return 0;
}