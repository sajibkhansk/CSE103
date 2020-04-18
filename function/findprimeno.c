#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter lower range : ");
    scanf("%d", &m);
    printf("Enter Upper range : ");
    scanf("%d", &n);
    f(m,n);
}
int f(int a, int b)
{
    int i,j;
    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j!=0)
            printf("%d, ", i);
        }
    }
}
