#include<stdio.h>
int pp(int a, int b)
{
    int sum,i,j;
    for(i=a;i<=b;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
            if(sum==i)
            {
                printf("%d ", i);
            }
        }
}


int main()
{
    int start, end;

    /* Input lower and upper limit to print perfect numbers */
    printf("Enter lower limit to print perfect numbers: ");
    scanf("%d", &start);
    printf("Enter upper limit to print perfect numbers: ");
    scanf("%d", &end);
    pp(start, end);

}

