#include <iostream>

using namespace std;

int main()
{
  int c=0;  int n= 20;
  long long int F=1;
  for (long long int i = n;i>0; i--)
  {
    F=F*i;
  }
  
  while(F>9)
  {
    if(F%10==0)
    ++c;
    F=F/10;
  }
  
  printf("No of trailing zeros for factorial of %lld is %d",n,c);
  return 0;
}