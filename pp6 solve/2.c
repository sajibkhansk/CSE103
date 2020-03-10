#include<stdio.h>
int main()
{
    int i,j,n,flag;
    printf("Enter The value: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        flag=0;
        printf("%d = ", i);
        for(j=2; j<i; j++)
        {
            if(i%j==0){
                flag=1;
                break;
            }
        }

        if(flag==0){
            printf("Not Composite");
        }
        if(flag==1){
            printf("Composite");
        }

    printf("\n");
}
}

