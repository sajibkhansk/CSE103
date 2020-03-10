#include<stdio.h>
int main()
{
    int i , r , c , j;
    printf("Enter number of rows = ");
    scanf("%d" , &r);
    printf("Enter number of columns = ");
    scanf("%d" , &c);
    int a[r][c] , b[r][c] , d[r][c];
    printf("Enter array elements = ");
    for(i = 0; i<r; i++)
    {
        for(j = 0; j<c; j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }
    for(i = 0; i<r; i++)
    {
        for(j = 0; j<c; j++)
        {
            b[i][c-1-j] = a[i][j];
        }
    }
    for(i = 0; i<r; i++)
    {
        for(j = 0; j<c; j++)
        {
            if(b[i][j] == 0)
            {
                d[i][j] = 1;
            }
            if(b[i][j] == 1)
            {
                d[i][j] = 0;
            }
        }
    }
    printf("\nAfter flipping : \n");
    for(i = 0; i<r; i++)
    {
        for(j = 0; j<c; j++)
        {
            printf("%d " , b[i][j]);
        }
        printf("\n");
    }
    printf("\nAfter inverting : \n");
    for(i = 0; i<r; i++)
    {
        for(j = 0; j<c; j++)
        {
            printf("%d " , d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
