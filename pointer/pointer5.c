#include<stdio.h>
int swap(int *p1, int *p2)
{
    int c;
    c=*p1;
    *p1=*p2;
    *p2=c;
}


int main()
{
    int a=10,b=30;
    printf("before swap:a=%d, b=%d\n", a,b);
    swap(&a,&b);
    printf("After Swap:");
    printf("a=%d",a);
    printf("b=%d",b);



}
