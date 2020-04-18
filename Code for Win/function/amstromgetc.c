#include<stdio.h>
int main()
{
    int n;
    printf("Enter Your Number : ");
    scanf("%d", &n);
    pr(n);
    per(n);

}
int pr(int n)
{
    int i;
    int flag=0;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("The number is not prime");
    }
    else
    {
        printf("The number is prime");
    }
}
int per(int n)
{
    int i;
    int sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("\nThe number is perfect");
    }
    else
    {
        printf("\nThe number is not perfect");
    }
}



















