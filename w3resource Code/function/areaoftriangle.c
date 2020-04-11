#include<stdio.h>
double area (double a, double b)
{
    return 0.5 *a *b;
}
int main()
{
    double base, height;
    printf("Enter base and height : ");
    scanf("%lf %lf", &base, &height);
    printf("Result : %lf", area(base,height));
}
