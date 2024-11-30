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
  int a=7;  
  int b=13;
  
  int res= gcdEculid(a,b);
  
  
  printf("No of trailing zeros for factorial of %d & %d is %d",a,b,res);
  return 0;
}