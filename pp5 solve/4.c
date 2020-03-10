#include<stdio.h>
int main()
{
    int i, j, n, m, p, q;// two dimensional array with N rows and M columns
    printf("Enter M(Number of Rows):");
    scanf("%d", &m);
    printf("Enter n(Number of Columns):");
    scanf("%d", &n);
    int a[m][n];


    printf("Enter Array: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for ( i = 0; i < m; i++ ) // iterate over rows
    {
        for (  j = 0; j <n ; j++ ) // iterate over columns
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter second (Number of Rows):");
    scanf("%d", &p);
    printf("Enter second (Number of Columns):");
    scanf("%d", &q);
    int b[p][q];



    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            b[i][j]=a[i][j];
        }
    }
    printf("New Array\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
