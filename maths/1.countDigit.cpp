#include <bits/stdc++.h>
using namespace std;
int countDigitI(int n)
{
 int count =0;
    while(n)
    {
        n=n/10;
        count++;
    }
    return count;
}
int countDigitR(int n)
{

    if(n==0)
    return 0;
    return 1 + countDigitR(n/10);
}
int main()
{
   
    long n;
    scanf("%ld",&n);
    int c = countDigitR(n);
    printf("%d",c);

    return 0;
}
