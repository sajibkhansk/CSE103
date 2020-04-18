/**
    4.C program to check even or odd using functions
*/
#include<stdio.h>
int check(int x)
{
    return (x & 1);
}
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    if (check(x))
    {
        printf("The Number is odd");
    }
    else
    {
        printf("The number is even");
    }
    return 0;
}
