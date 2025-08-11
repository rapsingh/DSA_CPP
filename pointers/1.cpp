#include <iostream>

using namespace std;

int main()
{

int a;
int *p;
a=1025;
p=&a;
printf("address of a %d\n",p);
printf("address of p itself %d\n",&p);
printf("sizeof of int %d\n",sizeof(int));
printf("value of p + 1 is: %d\n",p+1);
printf("value at p + 1 is: %d\n",*(p+1));
printf("value at p  is: %d\n",*p);

char* p0;
p0 = (char*)p;
printf("value at p0  is: %d\n",*p0);
printf("address of p0 is: %d\n",*p0);
printf("value at p0 + 1 is: %d\n",*(p0+1));
 return 0;
}