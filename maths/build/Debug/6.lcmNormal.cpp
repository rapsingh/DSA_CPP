#include <iostream>

using namespace std;

int lcmNormal(int a, int b)
{
    int res=max(a,b);
    while(true)
    {
    if((res%a==0)&&(res%b==0))
    return res;
    res++;
    }
    return -1;
}

int main()
{
  int a=2;  
  int b=8;
  
  int res= lcmNormal(a,b);
  
  
  printf("LCM of %d & %d is %d",a,b,res);
  return 0;
}