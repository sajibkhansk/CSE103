#include<stdio.h>
int main()
{
    int x = 5;
    int *p;
    p=&x;
    printf("value of pointer=%d\n", p);
    printf("value of x = %d\n", x);
    printf("Address of x = %d\n", &x);
    printf("refer by pointer =%d\n", *p);
    printf("Address of pointer = %d\n", &p);
}
