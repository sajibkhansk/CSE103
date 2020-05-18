#include<stdio.h>
int main ()
{
   int x=1,y=2,z=3;
   int *p;
   p=&x;
   printf("x=%d\n", *p);
   p=&z;
   printf("z=%d\n", *p);
   p=&y;
   printf("y=%d\n", *p);
}
