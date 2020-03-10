#include<stdio.h>
int main()
{
    int n1,d1,n2,d2,x,y;
    printf("Enter 1st :");
    scanf("%d%d", &n1, &d1);
    printf("Enter 2nd : ");
    scanf("%d%d", &n2, &d2);
    x = ( d2 * n1 + d1 *n2);
    y =  d1 * d2;
    printf("Sum = %d / %d", x, y);

}
