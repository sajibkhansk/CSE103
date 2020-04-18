#include<stdio.h>
void ud(double base,double exp)
{
    double result=1,i;
    for(i=1;i<=exp;i++)
    {
        result*=base;
    }
    printf("Result : %.2lf\n", result);
}


int main()
{
    double base,exp,result=1,i;
    printf("Enter base = ");
    scanf("%lf", &base);
    printf("Enter exponent = ");
    scanf("%lf", &exp);
    ud(base,exp);
    printf("Enter base = ");
    scanf("%lf", &base);
    printf("Enter exponent = ");
    scanf("%lf", &exp);
    ud(base,exp);

}

