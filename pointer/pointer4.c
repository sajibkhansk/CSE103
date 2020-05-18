#include<stdio.h>
int main()
{
    int a=10,b=30,c;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    c=*p1;
    *p1=*p2;
    *p2=c;
    printf("x=%d",a);
    printf("y=%d",b);



}
