int main()
{
    int n, a, b, x, y;
    printf("Enter 3digit number : ");
    scanf("%d", &n);
    a = n/10;
    x = n %10;//last
    b = a / 10;//fast
    y = a % 10;//mid
    printf("%d\t%d\t%d", b, y, x);
    return 0;
}

