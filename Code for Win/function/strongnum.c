#include<stdio.h>
int str (int a, int b)
{
    int i,j,sum=0,ld=0,fact;
    for(i=a; i<=b; i++)
    {

        while(i!=0)
        {
            ld=i%10;
            fact=1;
            for(j=ld; j>=1; j--)
            {
                fact=fact*ld;
            }
            sum=sum=fact;
            i=i/10;
        }
        if(sum==i)
        {
            printf("%d, ",i);
        }

    }
}


int main()
{
    int n,m;
    printf("Enter upper limit :");
    scanf("%d", &n);
    printf("Enter upper limit :");
    scanf("%d", &m);
    str(n,m);
}
