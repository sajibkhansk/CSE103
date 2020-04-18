/**
  3.C program to find maximum and minimum between two numbers using functions
 */
#include<stdio.h>
int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int min(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int x,y;
    scanf("%d%d", &x, &y);
    printf("Maximum: %d\n", max(x,y));
    printf("Minimum: %d\n", min(x,y));
}
