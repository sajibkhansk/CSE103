#include<stdio.h>
int sum (int a, int b)
{
    return a+b;
}
int main()
{

    int m,n;
    scanf("%d%d", &m,&n);
    int s=sum(m,n);
    printf("Sum: %d", s);

}


