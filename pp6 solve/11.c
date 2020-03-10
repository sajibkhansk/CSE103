int main()
{
    int i , j , n , sum = 0, mul = 1;
    printf("Enter n = ");
    scanf("%d" , &n);
    for(i = 1 ; i <= n; i++)
    {
        sum = 0;
        for(j = 1; j<=i; j++)
        {
            sum += j;
        }
        mul *= sum;
    }
    printf("%d" , mul);
}

