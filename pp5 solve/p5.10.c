
#include<stdio.h>
int main() {
    int i, j, N, M, P, Q,k=0;
    printf("Enter N(Number of Rows):");
    scanf("%d", &N);
    printf("Enter M(Number of Columns):");
    scanf("%d", &M);
    int a[N][M];
    int c[N*M];
    printf("Enter Array: ");
    for ( i = 0; i < N; i++ )
    {
        for (  j = 0; j < M; j++ )
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
       for ( i = 0; i < N; i++ )
    {
        for (  j = 0; j < M; j++ )
        {
           c[k]=a[i][j];
            k++;
        }
    }
    printf("1d array: ");
        for (  i = 0; i < k; i++ )
        {
           printf("%d ",c[i]);
        }
        printf("\n");

    printf("Enter second (Number of Rows):");
    scanf("%d", &P);
    printf("Enter second (Number of Columns):");
    scanf("%d", &Q);
    int b[P][Q];

     k=0;

    if(P*Q==N*M){

     for(i = 0; i < P; i++){

        for(j = 0; j < Q; j++){

           b[i][j]=c[k];
           k++;

        }
        }
        printf("new array: ");

       for(i=0;i<P;i++){
           for(j=0;j<Q;j++){

                printf("%d",b[i][j]);
            }
            printf("\n");
        }
}
else{
    printf("not possible");
}
}
