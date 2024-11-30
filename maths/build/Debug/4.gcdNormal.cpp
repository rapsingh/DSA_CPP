#include <iostream>

using namespace std;

int main()
{
  int a=100;  
  int b= 200;
  int res = min(a,b);
  while(res>0)
  {
    if((a%res==0)&&(b%res==0))
    break;
    --res;
  }
  
  
  printf("HCF of %d & %d is %d",a,b,res);
  return 0;
}