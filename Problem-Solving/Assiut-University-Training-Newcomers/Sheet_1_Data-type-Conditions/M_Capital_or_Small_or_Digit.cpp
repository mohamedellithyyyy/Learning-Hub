#include <iostream>
using namespace std;
 
int main()
{
  char a;
  cin>> a;
  
  if (int(a) >= 65)
  {
      cout<<"ALPHA"<<endl;
      if (int(a)>=97)
        cout<<"IS SMALL";
      else
        cout<<"IS CAPITAL";
  }
  else
      cout<<"IS DIGIT";
    
    return 0;
}