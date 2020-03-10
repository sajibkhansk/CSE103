#include<stdio.h>
int main()
{
    int i,j,n,tmp;
    int mul=1;
    printf("Enter The value: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        tmp=i;
        mul=1;
        printf("%d = ", i);
        for(j=i; j>=1; j--)
        {

                mul*=i;
                i--;

        }
        printf("%d\n", mul);
        i=tmp;

        }


}
