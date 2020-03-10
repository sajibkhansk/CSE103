#include<stdio.h>
int main()
{
    int i, j, n, m, p, q;
    float sparcity=0,density=0;// two dimensional array with N rows and M columns
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
    for ( i = 0; i < m; i++ ) // iterate over rows
    {
        for (  j = 0; j <n ; j++ ) // iterate over columns
        {
            if(a[i][j]==0){
                sparcity++;
            }
            if(a[i][j]!=0){
                density++;
            }
        }
        printf("\n");
    }
    printf("spa=%f\n",sparcity/(float)(m*n));
    printf("den=%f\n",density/(m*n));
}
