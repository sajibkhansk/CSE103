#include<stdio.h>
int sq(int a)
{
    return a*a*a;
}

int main()
{
    int x;
    scanf("%d", &x);
    printf("Square: %d", sq(x));
    
}