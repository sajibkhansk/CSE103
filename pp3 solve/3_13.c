#include<stdio.h>
int main()
{
    int n, originalnumber, rim, result =0;
    printf("Enter a three digit integer :");
    scanf("%d", &n);
    originalnumber = n;
    while ( originalnumber != 0 ){
        rim = originalnumber % 10;
        result = result + rim * rim * rim * rim;
        originalnumber = originalnumber / 10;
    }
        if (result == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
    return 0;

}
