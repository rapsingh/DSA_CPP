#include <iostream>

using namespace std;

int main()
{

int a;
int *p;
a=1025;
p=&a;
printf("address of a %d",p);
printf("address of p itself %d",&p);
    return 0;
}