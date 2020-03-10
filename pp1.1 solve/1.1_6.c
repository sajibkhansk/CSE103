#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf( "Enter Three integer : ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Before Swaping a =%d, b=%d, c=%d\n",a, b, c);
    d = a;
    a = b;
    b = c;
    c = d;
    printf("After swaping a = %d, b=%d, c=%d", a, b, c);
    return 0;
}
