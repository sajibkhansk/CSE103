int main()
{
    int i , r , c , j , k;
    printf("Enter number of rows1 = ");
    scanf("%d" , &r);
    printf("Enter number of columns1 = ");
    scanf("%d" , &c);
    int a[r][c];
    printf("Enter array elements = ");
    for(i = 0; i<r; i++)
    {
        for(j = 0; j<c; j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }
    int p , q;
    printf("Enter number of rows2 = ");
    scanf("%d" , &p);
    printf("Enter number of columns2 = ");
    scanf("%d" , &q);
    int b[p][q];
    printf("Enter 2nd array elements = ");
    for(i = 0; i<p; i++)
    {
        for(j = 0; j<q; j++)
        {
            scanf("%d" , &b[i][j]);
        }
    }
    int c3 = c+q;
    printf("\n%d %d\n\n" , p , c3);
    if(r == p)
    {
        int c[p][c3];
        for(i = 0; i<r; i++)
        {
            for(j = 0; j<c; j++)
            {
                c[i][j] = a[i][j];
            }
        }
        for(i = 0; i<p; i++)
        {
            j = 0;
            for(k = c; k<c3; k++)
            {
                c[i][k] = b[i][j];
                j++;
            }
        }
        for(i = 0; i<p; i++)
        {
            for(j = 0; j<c3; j++)
            {
                printf("%d " , c[i][j]);
            }
            printf("\n");
        }
    }
    else

    {
        printf("Not possible to horizontally stack the two arrays");

    }
}


