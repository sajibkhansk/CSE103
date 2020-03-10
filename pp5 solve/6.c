#include<stdio.h>
int main() {
    int i, j, N, M;
    int flag=1;// two dimensional array with N rows and M columns
    printf("Enter N(Number of Rows):");
    scanf("%d", &N);
    printf("Enter M(Number of Columns):");
    scanf("%d", &M);
    int a[N][M];

    printf("Enter Array: ");
    for ( i = 0; i < N; i++ ) // iterate over rows
    {
        for (  j = 0; j < M; j++ ) // iterate over columns
        {
            scanf("%d", &a[i][j]);
        }
    }

    for ( i = 0; i < N; i++ ) // iterate over rows
    {
        for (  j = 0; j < M; j++ ) // iterate over columns
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < N; i++ ) // iterate over rows
    {
        for (  j = 0; j < M; j++ ) // iterate over columns
        {
            if(i==j && a[i][j]==0){
                flag=0;
            }
            if(i!=j && a[i][j]!=0){
                flag=0;
            }
        }

    }
    if(flag==1){
        printf("diagonal");
    }
    if(flag==0){
       printf(" Not diagonal");
    }































    return 0;
}
