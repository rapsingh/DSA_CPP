#include <iostream>

using namespace std;

int gcdEculid(int a, int b)
{
    while(a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }

    }
    return a;
}

int main()
{
  int a=2;  
  int b=8;
  
  int hcf= gcdEculid(a,b);
  int res = (a*b)/hcf;
  
  
  printf("LCM of %d & %d is %d",a,b,res);
  return 0;
}