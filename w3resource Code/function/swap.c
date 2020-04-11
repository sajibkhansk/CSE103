#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d", &x, &y);
    printf("Before swap : n1= %d, n2=%d\n", x,y);
    swap(x,y);
}
int swap(int a,int b)
{
    int c;
    c=b;
    b=a;
    a=c;
   printf("After swap : n1= %d, n2=%d\n", a,b);

}
