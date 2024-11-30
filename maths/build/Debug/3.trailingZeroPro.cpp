#include <iostream>

using namespace std;

int main()
{
  int res=0;  
  int n= 100;
  for (int i = 5; i<=n;i*=5)
  {
    /* code */
    res=res + n/i;
  }
  
  
  printf("No of trailing zeros for factorial of %d is %d",n,res);
  return 0;
}