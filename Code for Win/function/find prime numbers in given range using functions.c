#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Lower Limit :");
    scanf("%d", &a);
    printf("Enter upper Limit :");
    scanf("%d", &b);
    c(a,b);
}
int c(int x, int y)
{
    int i,j;
    for(i=x; i<=y; i++)
    {
        int flag=1;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d, ", i);
        }
    }
}
